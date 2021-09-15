// 修改8.1节的程序repdigit.c，使其可以显示出哪些数字有重复（如果有的话）：
// Enter a number: 939577
// Repeated digit(s): 7 9

/* Checks numbers for repeated digits */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
int main(void) {
    unsigned int digit_seen[10] = {0};
    long digit;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (size_t i = 0; i < 10; ++i) {
        if (digit_seen[i] > 1) {
            printf("%lu ", i);
        }
    }
    printf("\n");
    return 0;
}
