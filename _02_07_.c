// 编写一个程序
// 要求用户输入一个美金数量
// 然后显示出如何用最少的20美元、10美元、5美元和1美元来付款

#include <stdio.h>

int main() {
    unsigned int dollars;
    unsigned int nums_20 = 0;
    unsigned int nums_10 = 0;
    unsigned int nums_5 = 0;
    unsigned int nums_1 = 0;
    printf("Enter a dollar amount: ");
    scanf("%u", &dollars);
    nums_20 = dollars / 20;
    dollars = dollars - 20 * nums_20;
    nums_10 = dollars / 10;
    dollars = dollars - 10 * nums_10;
    nums_5 = dollars / 5;
    dollars = dollars - 5 * nums_5;
    nums_1 = dollars / 1;
    printf("$20 bills: %d\n", nums_20);
    printf("$10 bills: %d\n", nums_10);
    printf("$5 bills: %d\n", nums_5);
    printf("$1 bills: %d\n", nums_1);
    return 0;
}
