// 计算多项式的值
#include <stdio.h>

int main() {
    float x;
    printf("请输入x的值: \n");
    scanf("%f", &x);
    printf("多项式的值为: %f\n", 3 * x * x * x * x * x + 2 * x * x * x * x -
                                     5 * x * x * x - x * x + 7 * x - 6);
    return 0;
}
