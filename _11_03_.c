// 修改第6章的编程题3，使其包含下列函数：
// void reduce(int numerator, int denominator, int *reduced_numerator, int
// *reduced_denominator); numerator和denominator分别是分数的分子和分母。
// reduced_numerator和reduced_denominator是指向变量的指针，
// 相应变量中分别存储把分数化为最简形式后的分子和分母。

// 写程序，要求用户输入一个分数，然后将其约分为最简分式：
// 提示：为了把分数约分为最简分式，首先计算分子和分母的最大公约数，然后分子和分母都除以最
// 大公约数。

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
    int m, n, temp;
    m = numerator;
    n = denominator;
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}

int main() {
    int a, b;
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);

    int reduced_numerator, reduced_denominator;
    reduce(a, b, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms : %d/%d\n", reduced_numerator, reduced_denominator);
    return 0;
}
