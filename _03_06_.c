// 修改3.2节的addfrac.c程序，使用户可以同时输入两个分数，中间用加号隔开：

#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);
    printf("The sum is %d/%d\n", a * d + b * c, b * d);
    return 0;
}
