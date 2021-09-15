// 修改4.1节的upc.c程序，使其可以检测UPC的有效性。在用户输入UPC后，程序将显示VALID或NOT
// VALID。 a valid UPC: 013800151735

#include <stdio.h>

int main() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, last, first_sum, second_sum,
        total;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1,
          &j2, &j3, &j4, &j5);
    printf("Enter the last one digit of a UPC: ");
    scanf("%1d", &last);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    if (last == 9 - ((total - 1) % 10))
        printf("VALID\n");
    else
        printf("NOT VALID\n");
    return 0;
}
