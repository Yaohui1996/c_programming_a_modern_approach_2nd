// 编写一个程序
// 要求用户输入一个美元数量
// 然后显示出增加5%税率后的相应金额

#include <stdio.h>

int main() {
    float dollar;
    scanf("%f", &dollar);
    printf("Enter an amount: %.2f\n", dollar);
    printf("With tax added: $%.2f\n", dollar * 1.05);
    return 0;
}
