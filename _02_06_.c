// 计算多项式的值(Horner's Rule)
#include <stdio.h>

int main() {
    float x;
    printf("请输入x的值: \n");
    scanf("%f", &x);
    printf("多项式的值为: %f\n",
           ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    return 0;
}
