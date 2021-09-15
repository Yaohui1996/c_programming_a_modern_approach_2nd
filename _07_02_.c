// 修改6 .3节的程序square2.c，每24次平方后暂停并显示下列信息：
// Press Enter to continue...
// 显示完上述消息后，程序应该使用getchar函数读入一个字符。
// getchar函数读到用户录入的回车键才允许程序继续。

/* Prints a table of squares using a for statement */

#include <stdio.h>
int main(void) {
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    unsigned int times = 1;
    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if (times % 24 == 0) {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n') {
                printf("Press Enter to continue...\n");
            }
        }
        ++times;
    }
    return 0;
}
