// 编写一个程序，要求用户输入24小时制的时间，然后显示12小时制的格式：
// 注意不要把12 : 00显示成0 : 00。

#include <stdio.h>

int main() {
    unsigned int min;
    unsigned int sec;
    printf("Enter a 24-hour time: ");
    scanf("%u:%u", &min, &sec);
    if (min > 12 && min != 24) {
        printf("Equivalent 12-hour time: %u:%u PM\n", min - 12, sec);
    } else if (min == 24) {
        printf("Equivalent 12-hour time: %u:%u AM\n", min - 24, sec);
    } else {
        printf("Equivalent 12-hour time: %u:%u AM\n", min, sec);
    }
    return 0;
}
