// 编写一个程序，确定一个数的位数：
// 假设输入的数最多不超过4位。
// 提示：利用if语句进行数的判定。
// 例如，如果数在0到9之间，那么位数为1；
// 如果数在10到99之间，那么位数为2。

#include <stdio.h>

int main() {
    unsigned int x;
    printf("Enter a number x (x>=0):");
    scanf("%u", &x);
    unsigned int digits;
    if (x <= 9) {
        digits = 1;
    } else if (x >= 10 && x <= 99) {
        digits = 2;
    } else if (x >= 100 && x <= 999) {
        digits = 3;
    } else {
        digits = 4;
    }
    printf("The number %u has %u digits\n", x, digits);
    return 0;
}
