// 编程计算正整数的阶乘：
// Enter a positive integer: 6
// Factorial of 6: 720
// (a) 用short类型变量存储阶乘的值。为了正确打印出n的阶乘，n的最大值是多少？
// (b) 用int类型变量重复(a)。
// (c) 用long类型变量重复(a)。
// (d) 如果你的编译器支持long long类型，用long long类型变量重复(a)。
// (e) 用float类型变量重复(a)。
// (f) 用double类型变量重复(a)。
// (g) 用long double类型变量重复(a)。
// 在(e)～(g)几种情况下，程序会显示阶乘的近似值，不一定是准确值。

#include <stdio.h>

int main() {
  // (a)
  printf("Enter a positive integer: ");
  short n_short;
  scanf("%hd", &n_short);
  short result_short = 1;
  for (short i = 1; i <= n_short; ++i) {
    result_short *= i;
  }
  printf("%hd的阶乘为: %hd\n", n_short, result_short);
  // n_max = 7

  // (b)
  printf("Enter a positive integer: ");
  int n_int;
  scanf("%d", &n_int);
  int result_int = 1;
  for (int i = 1; i <= n_int; ++i) {
    result_int *= i;
  }
  printf("%d的阶乘为: %d\n", n_int, result_int);
  // n_max = 

  return 0;
}
