// 重新编写编程题2中的程序，使新程序不需要利用算术分割就可以显示出3位数的逆序。
// 提示：参考4.1节的upc.c程序。

#include <stdio.h>

int main() {
    int x;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    int a, b, c;
    a = x % 10;
    b = ((x - a) / 10) % 10;
    c = (x - a - b) / 100;
    printf("The reversal is: %d%d%d\n", a, b, c);
    return 0;
    return 0;
}
