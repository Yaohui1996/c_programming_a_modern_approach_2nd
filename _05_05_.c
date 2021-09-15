// 在美国的某个州，单身居民需要担负下面表格列出的所得税。
// 编写一个程序，要求用户输入需纳税的收入，然后显示税金。

#include <stdio.h>

int main() {
    double income = 0.0;
    double tax = 0.0;
    printf("请输入收入: ");
    scanf("%lf", &income);
    if (income <= 750)
        tax = income * 0.01;
    else if (income > 750 && income <= 2250)
        tax = 7.50f + (income - 750) * 0.02;
    else if (income > 2250 && income <= 3350)
        tax = 37.50f + (income - 2250) * 0.03;
    else if (income > 3750 && income <= 5250)
        tax = 82.50f + (income - 3750) * 0.04;
    else if (income > 5250 && income <= 7000)
        tax = 142.50f + (income - 5250) * 0.05;
    else if (income > 7000)
        tax = 230.00f + (income - 7000) * 0.06;
    printf("应缴纳税额: %f\n", tax);
    return 0;
}
