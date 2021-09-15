// 编写一个程序，根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，
// 最后加一个点：
// Enter a first and last name: Lloyd Fosdick
// Fosdick, L.
// 用户的输入中可能包含空格（名之前、名和姓之间、姓氏之后）。

#include <stdio.h>

int main() {
    printf("Enter a first and last name: ");
    char ch_f;
    ch_f = getchar();
    while (ch_f == ' ') {
        ch_f = getchar();
    }

    char ch_l;
    ch_l = getchar();
    while (ch_l != ' ') {
        ch_l = getchar();
    }

    while (ch_l == ' ') {
        ch_l = getchar();
    }

    while (ch_l != ' ' && ch_l != '\n') {
        printf("%c", ch_l);
        ch_l = getchar();
    }
    printf(", %c.\n", ch_f);

    return 0;
}
