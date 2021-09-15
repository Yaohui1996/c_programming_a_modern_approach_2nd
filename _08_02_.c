// 修改8.1节的程序repdigit.c，使其打印出一份列表，显示出每个数字在数中出现的次数：
// Enter a number: 41271092
// Digit: 0 1 2 3 4 5 6 7 8 9
// Occurrences： 1 2 2 0 1 0 0 1 0 1

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
    printf("Digit: ");
    for (size_t i = 0; i < 10; ++i) {
        printf("%zu ", i);
    }
    printf("\nOccurrences: ");
    for (size_t i = 0; i < 10; ++i) {
        printf("%u ", digit_seen[i]);
    }
    printf("\n");
    return 0;
}
