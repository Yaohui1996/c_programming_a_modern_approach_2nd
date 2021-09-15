// 修改第3章的编程题6，使得用户可以对两个分数进行加、减、乘、除运算（在两个分数之间输入+、-、
// *或/符号）。

#include <stdio.h>

int main() {
    int a, b, c, d;
    char ch;
    printf("Enter two fractions: ");
    scanf("%d/%d", &a, &b);
    ch = getchar();
    scanf("%d/%d", &c, &d);
    if (ch == '+') {
        printf("The sum is %d/%d\n", a * d + b * c, b * d);
    } else if (ch == '-') {
        printf("The minus is %d/%d\n", a * d - b * c, b * d);
    } else if (ch == '*') {
        printf("The product is %d/%d\n", a * c, b * d);
    } else if (ch == '/') {
        printf("The division is %d/%d\n", a * d, b * c);
    }
    return 0;
}
