// 编写程序，找出用户输入的一串数中的最大数。
// 程序需要提示用户一个一个地输入数。
// 当用户输入0或负数时，程序必须显示出已输入的最大非负数：
// 注意，输入的数不一定是整数。

#include <stdio.h>

int main() {
    float input;
    float ret = 0;
    printf("Enter a number: ");
    scanf("%f", &input);
    while (input > 0) {
        if (input > ret) {
            ret = input;
        }
        printf("Enter a number: ");
        scanf("%f", &input);
    }
    printf("The largest number entered was: %.2f\n", ret);

    return 0;
}
