
#include <stdio.h>

int main() {
    float speed;
    printf("请输入风速: ");
    scanf("%f", &speed);
    if (speed < 1)
        printf("Calm 无风\n");
    else if (speed >= 1 && speed <= 3)
        printf("Light air 轻风\n");
    else if (speed >= 4 && speed <= 27)
        printf("Breeze 微风\n");
    else if (speed >= 28 && speed <= 47)
        printf("Gale 大风\n");
    else if (speed >= 48 && speed <= 63)
        printf("Storm 暴风\n");
    else
        printf("Hurricane 飓风\n");
    return 0;
}
