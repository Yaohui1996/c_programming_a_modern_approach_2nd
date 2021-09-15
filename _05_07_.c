// 编写一个程序，从用户输入的4个整数中找出最大值和最小值：
// 要求尽可能少用if语句。提示：4条if语句就足够了。

#include <stdio.h>

int main() {
    int a, b, c, d, max_value_1, min_value_1, max_value_2, min_value_2,
        max_value, min_value;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        max_value_1 = a;
        min_value_1 = b;
    } else {
        max_value_1 = b;
        min_value_1 = a;
    }

    if (c > d) {
        max_value_2 = c;
        min_value_2 = d;
    } else {
        max_value_2 = d;
        min_value_2 = c;
    }

    if (max_value_1 > max_value_2)
        max_value = max_value_1;
    else
        max_value = max_value_2;

    if (min_value_1 < min_value_2)
        min_value = min_value_1;
    else
        min_value = min_value_2;

    printf("Largest: %d\n", max_value);
    printf("Smallest: %d\n", min_value);

    return 0;
}
