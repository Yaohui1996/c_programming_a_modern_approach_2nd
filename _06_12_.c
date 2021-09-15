// 修改编程题11，使得程序持续执行加法运算，直到当前项小于eps为止，其中eps是用户输入的较小的（浮点）数。

#include <stdio.h>

int main() {
    double e = 2, eps;
    printf("请输入eps: ");
    scanf("%lf", &eps);
    double temp = 1;
    unsigned i = 2;

    while (temp > eps) {
        unsigned int factor = 1;
        for (unsigned j = 1; j <= i; ++j) {
            factor *= j;
        }
        temp = 1.0 / (double)factor;
        e += temp;
        ++i;
    }
    printf("e: %f\n", e);
    return 0;
}
