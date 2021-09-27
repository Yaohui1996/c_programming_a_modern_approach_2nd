// 16. 修改第12章的编程题1，使其包含如下函数：
// void reverse(char *message);
// 函数的作用是反转message指向的字符串。提示：使用两个指针，初始时一个指向字符串的第一个
// 字符，另一个指向最后一个字符。交换这两个字符，然后让两个指针相向移动；重复这一过程直到
// 两个指针相遇。

// 1. (a) 编写程序读一条消息，然后逆序打印出这条消息：
// 提示：一次读取消息中的一个字符（用getchar函数），
// 并且把这些字符存储在数组中，当数组满了或者读到字符'\n'时停止读操作。
// (b) 修改上述程序，用指针代替整数来跟踪数组中的当前位置。

#include <stdio.h>
#include <string.h>

void reverse(char *message) {
    char *i = &message[0];
    char *j = &message[strlen(message) - 1];
    int temp_val;
    while (i < j) {
        temp_val = *i;
        *i = *j;
        *j = temp_val;

        ++i;
        --j;
    }
}

int main() {
    // read message
    printf("Enter a message: ");
    char a[100];
    gets(a);
    printf("反转前: %s\n", a);

    // reverse message
    reverse(a);
    printf("反转后: %s\n", a);
    return 0;
}