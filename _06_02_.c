// 编写程序，要求用户输入两个整数，然后计算并显示这两个整数的最大公约数（GCD）：
// 提示：求最大公约数的经典算法是Euclid算法，方法如下：
// 分别让变量m和n存储两个数的值。
// 如果n为0，那么停止操作，m中的值是GCD；
// 否则计算m除以n的余数，把n保存到m中，并把余数保存到n中。
// 然后重复上述过程，每次都先判定n是否为0。

#include <stdio.h>

int main() {
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    printf("Greatest common divisor : %d\n", m);
    return 0;
}
