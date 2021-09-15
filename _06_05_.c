// 第4章的编程题1要求编写程序显示出两位数的逆序。
// 设计一个更具一般性的程序，可以处理一位、两位、三位或者更多位的数。
// 提示：使用do循环将输入的数重复除以10，直到值达到0为止。

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int a, b;
    a = x % 10;
    b = x / 10;
    printf("The reversal is: %d%d\n", a, b);
    // TODO
    return 0;
}
