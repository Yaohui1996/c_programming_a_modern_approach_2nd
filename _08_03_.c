// 修改8.1节的程序repdigit.c，使得用户可以录入多个数进行重复数字的判断。
// 当用户录入的数小于或等于0时，程序终止。

/* Checks numbers for repeated digits */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
int main(void) {
    long n;
    printf("请输入大于0的数: ");
    scanf("%ld", &n);
    while (n > 0) {
        bool digit_seen[10] = {false};
        long digit;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) break;
            digit_seen[digit] = true;
            n /= 10;
        }
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
        printf("请输入大于0的数: ");
        scanf("%ld", &n);
    }
    return 0;
}
