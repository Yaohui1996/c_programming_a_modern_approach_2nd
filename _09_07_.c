// 如果换一种方法计算 x^n ，9.6节的power函数速度可以更快。
// 我们注意到，如果n是2的幂，则可以通过自乘的方法计算 x^n。
// 例如， x^4 是 x^2 的平方，所以 x^4 可以用两次乘法计算，而不需要三次乘法。
// 这种方法甚至可以用于n不是2的幂的情况。
// 如果n是偶数，可以用公式 x^n=(x^(n/2))^2；
// 如果n是奇数，则 x^n = x*x^(n-1)。
// 编写计算 x^n 的递归函数（递归在n=0时结束，此时函数返回1）。
// 为了测试该函数，写一个程序要求用户输入x和n的值，
// 调用power计算 x^n ，然后显示函数的返回值。

#include <stdio.h>

int power(int x, int n);

int main() {
    printf("%d\n", power(2, 1));
    printf("%d\n", power(2, 2));
    printf("%d\n", power(2, 3));
    printf("%d\n", power(2, 4));
    printf("%d\n", power(2, 5));
    printf("%d\n", power(2, 6));
    printf("%d\n", power(2, 7));
    printf("%d\n", power(2, 8));
    printf("%d\n", power(2, 16));
    return 0;
}

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        if (n % 2 == 0) {
            return power(x, n / 2) * power(x, n / 2);
        } else {
            return x * power(x, n - 1);
        }
    }
}
