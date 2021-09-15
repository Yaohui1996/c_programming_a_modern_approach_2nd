// 修改8.1节的程序interest.c，使得修改后的程序可以每月整合一次利息，而不是每年整合一次利息。
// 不要改变程序的输出格式，余额仍按每年一次的时间间隔显示。

/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main() {
    int i, low_rate, num_years;
    double value[5];
    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    for (int month = 1; month <= num_years * 12; month++) {
        if (month % 12 == 0) {
            printf("%3d ", month / 12);
        }
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 / 12.0 * value[i];
            if (month % 12 == 0) {
                printf("%7.2f", value[i]);
            }
        }
        if (month % 12 == 0) {
            printf("\n");
        }
    }
    return 0;
}
// TODO
