// 第2章的编程题8要求编程计算第一、第二、第三个月还贷后剩余的贷款金额。
// 修改该程序，要求用户输入还贷的次数并显示每次还贷后剩余的贷款金额。

#include <stdio.h>

int main() {
    float loan;
    float rate;
    float payment;
    unsigned int nums;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("请输入还贷次数: ");
    scanf("%u", &nums);
    for (unsigned int i = 1; i <= nums; ++i) {
        loan = loan - payment + loan * (rate / 100.0f / 12.0f);
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
    }
    return 0;
}
