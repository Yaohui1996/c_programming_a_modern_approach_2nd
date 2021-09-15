// 编程计算第一、第二、第三个月还贷后剩余的贷款金额

#include <stdio.h>

int main() {
    float loan;
    float rate;
    float payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    loan = loan - payment + loan * (rate / 100.0f / 12.0f);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = loan - payment + loan * (rate / 100.0f / 12.0f);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = loan - payment + loan * (rate / 100.0f / 12.0f);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    return 0;
}
