// 编写函数计算下面多项式的值：
// 3*x^5+2*x^4-5*x^3-x^2+7*x-6
// 编写程序要求用户输入x的值，调用该函数计算多项式的值并显示函数返回的值。

#include <stdio.h>

int duoxiangshi(int x);
int yh_pow(int x, int n);

int main() {
    int x;
    printf("请输入x的值: ");
    scanf("%d", &x);
    printf("%d\n", duoxiangshi(x));
    return 0;
}

int yh_pow(int x, int n) {
    int result = 1;
    for (int i = 0; i != n; ++i) {
        result *= x;
    }
    return result;
}

int duoxiangshi(int x) {
    return 3 * yh_pow(x, 5) + 2 * yh_pow(x, 4) - 5 * yh_pow(x, 3) -
           yh_pow(x, 2) + 7 * yh_pow(x, 1) - 6;
}
