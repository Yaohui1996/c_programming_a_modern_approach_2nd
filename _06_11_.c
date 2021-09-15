// 数学常量e的值可以用一个无穷级数表示：
// 编写程序，用下面的公式计算e的近似值：

#include <stdio.h>

int main() {
    unsigned int n;
    float e = 1;
    printf("请输入整数n: ");
    scanf("%u", &n);
    for (unsigned int i = 1; i <= n; ++i) {
        unsigned int temp = 1;
        for (unsigned int j = 1; j <= i; ++j) {
            temp *= j;
        }
        e += 1.0f / (float)temp;
    }
    printf("e: %f\n", e);
    return 0;
}
