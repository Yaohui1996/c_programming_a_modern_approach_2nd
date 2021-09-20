// 修改第2章的编程题7，使其包含下列函数：
// void pay_amount(int dollars, int *twenties, int *tens, int *fives, int
// *ones);
// 函数需要确定：为支付参数dollars表示的付款金额，所需20美元、10美元、5美元和1美元的最小数目。
// twenties参数所指向的变量存储所需20美元的数目，tens、fives和ones参数类似。

// 编写一个程序
// 要求用户输入一个美金数量
// 然后显示出如何用最少的20美元、10美元、5美元和1美元来付款

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main() {
    int dollars;
    int nums_20 = 0;
    int nums_10 = 0;
    int nums_5 = 0;
    int nums_1 = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &nums_20, &nums_10, &nums_5, &nums_1);
    printf("$20 bills: %d\n", nums_20);
    printf("$10 bills: %d\n", nums_10);
    printf("$5 bills: %d\n", nums_5);
    printf("$1 bills: %d\n", nums_1);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars = dollars - 20 * (*twenties);
    *tens = dollars / 10;
    dollars = dollars - 10 * (*tens);
    *fives = dollars / 5;
    dollars = dollars - 5 * (*fives);
    *ones = dollars / 1;
}