// 扩展上题中的程序使其可以处理3位数

#include <stdio.h>

int main() {
    int x;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    int a, b, c;
    a = x % 10;
    b = x / 10 % 10;
    c = x / 10 / 10 % 10;
    printf("The reversal is: %d%d%d\n", a, b, c);
    return 0;
}
