// 3. 请利用数组名可以用作指针的事实简化编程题1的(b)的程序。

// 1. (a) 编写程序读一条消息，然后逆序打印出这条消息：
// 提示：一次读取消息中的一个字符（用getchar函数），
// 并且把这些字符存储在数组中，当数组满了或者读到字符'\n'时停止读操作。
// (b) 修改上述程序，用指针代替整数来跟踪数组中的当前位置。

#include <stdio.h>

int main() {
    // read message
    printf("Enter a message: ");
    char a[100];
    int str_len = 0;
    char ch = getchar();

    while (ch != '\n' && str_len < 100) {
        a[str_len] = ch;
        ++str_len;
        ch = getchar();
    }

    // (a)print message
    printf("(a)print message\n");
    for (int i = str_len - 1; i >= 0; --i) {
        printf("%c", a[i]);
    }
    printf("\n");

    // (b)print message
    printf("(b)print message\n");
    char *p = a + str_len;
    while (p >= &a[0]) {
        printf("%c", *p);
        --p;
    }
    printf("\n");

    return 0;
}