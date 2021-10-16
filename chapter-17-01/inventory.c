// 1.
// 修改16.3节的程序inventory.c，使其可以对数组inventory进行动态内存分配，并且在以后填满
// 时重新进行内存分配。初始使用malloc为拥有10个part结构的数组分配足够的内存空间。当数组没
// 有足够的空间给新的零件时，使用realloc函数来使内存数量加倍。在每次数组变满时重复加倍操
// 作步骤。

/* Maintains a parts database (array version) */
#include <stdio.h>
#include <stdlib.h>

#include "readline.h"
#define NAME_LEN 25
// #define MAX_PARTS 100
struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};
struct part* inventory;
int MAX_PARTS = 1; /*inventory指向的array最大的元素数目*/
int num_parts = 0; /* number of parts currently stored */
int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
struct part* resize_inventory(struct part* inventory);
/**********************************************************
 * main: Prompts the user to enter an operation code, *
 * then calls a function to perform the requested *
 * action. Repeats until the user enters the *
 * command 'q'. Prints an error message if the user *
 * enters an illegal code. *
 **********************************************************/
int main(void) {
    // 初始化inventory
    inventory = (struct part*)malloc(MAX_PARTS * sizeof(struct part));

    char code;
    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n') /* skips to end of line */
            ;
        switch (code) {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                return 0;
            default:
                printf("Illegal code\n");
        }
        printf("\n");
    }
}
/**********************************************************
 * find_part: Looks up a part number in the inventory *
 * array. Returns the array index if the part *
 * number is found; otherwise, returns -1. *
 **********************************************************/
int find_part(int number) {
    int i;
    for (i = 0; i < num_parts; i++)
        if (inventory[i].number == number) return i;
    return -1;
}
/**********************************************************
 * insert: Prompts the user for information about a new *
 * part and then inserts the part into the *
 * database. Prints an error message and returns *
 * prematurely if the part already exists or the *
 * database is full. *
 **********************************************************/
void insert(void) {
    int part_number;
    if (num_parts == MAX_PARTS) {
        printf("Database is full; can't add more parts.\n");
        printf("分配更多的空间给数组");
        inventory = resize_inventory(inventory);
        return;
    }
    printf("Enter part number: ");
    scanf("%d", &part_number);
    if (find_part(part_number) >= 0) {
        printf("Part already exists.\n");
        return;
    }
    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}
/**********************************************************
 * search: Prompts the user to enter a part number, then *
 * looks up the part in the database. If the part *
 * exists, prints the name and quantity on hand; *
 * if not, prints an error message. *
 **********************************************************/
void search(void) {
    int i, number;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else
        printf("Part not found.\n");
}
/**********************************************************
 * update: Prompts the user to enter a part number. *
 * Prints an error message if the part doesn't *
 * exist; otherwise, prompts the user to enter *
 * change in quantity on hand and updates the *
 * database. *
 **********************************************************/
void update(void) {
    int i, number, change;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else
        printf("Part not found.\n");
}
/**********************************************************
 * print: Prints a listing of all parts in the database, *
 * showing the part number, part name, and *
 * quantity on hand. Parts are printed in the *
 * order in which they were entered into the *
 * database. *
 **********************************************************/
void print(void) {
    int i;
    printf(
        "Part Number Part Name "
        "Quantity on Hand\n");
    for (i = 0; i < num_parts; i++)
        printf("%7d %-25s%11d\n", inventory[i].number, inventory[i].name,
               inventory[i].on_hand);
}

struct part* resize_inventory(struct part* inventory) {
    printf("%d\n", MAX_PARTS);
    void* result_p = realloc(inventory, 2 * MAX_PARTS);
    if (result_p == NULL) {
        printf("realloc返回的指针为NULL，意味着realloc失败!\n");
        return NULL;
    }
    MAX_PARTS *= 2;
    printf("%d\n", MAX_PARTS);
    return inventory;
}