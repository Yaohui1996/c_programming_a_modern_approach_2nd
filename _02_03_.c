// 编写一个计算球体体积的程序
// 其中球体半径为10m
// 注意，分数4/3应写为4.0f/3.0f（如果分数写成4/3会产生什么结果？）
// 提示：C语言没有指数运算符，所以需要对r自乘两次来计算。
// 用户可以自行录入球体的半径

#include <stdio.h>

#define PI 3.1415926535898

int main() {
    unsigned int r;
    printf("请输入球体的半径r: ");
    scanf("%u", &r);
    printf("球体的体积为: %f\n", 4.0f / 3.0f * PI * r * r * r);
    return 0;
}
