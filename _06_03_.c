// 写程序，要求用户输入一个分数，然后将其约分为最简分式：
// 提示：为了把分数约分为最简分式，首先计算分子和分母的最大公约数，然后分子和分母都除以最
// 大公约数。

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);

    int m, n, temp;
    m = a;
    n = b;
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    a /= m;
    b /= m;
    printf("In lowest terms : %d/%d\n", a, b);
    return 0;
}
