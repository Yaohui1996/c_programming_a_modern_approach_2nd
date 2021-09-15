// 重新安排程序square3.c，在for循环中对变量i进行初始化、判定以及自增操作。
// 不需要重写程序，特别是不要使用任何乘法。

/* Prints a table of squares using an odd method */
#include <stdio.h>
int main(void) {
    int n, odd;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    odd = 3;
    for (int square = 1, i = 1; i <= n; odd += 2, ++i) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}
