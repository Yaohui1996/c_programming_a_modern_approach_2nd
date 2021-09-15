// 编写程序显示单月的日历。用户指定这个月的天数和该月起始日是星期几：

// 提示：此程序不像看上去那么难。
// 最重要的部分是一个使用变量i从1计数到n的for语句（这里n是此月的天数），
// for语句中需要显示i的每个值。
// 在循环中，用if语句判定i是否是一个星期的最后一天，如果是，就显示一个换行符。

#include <stdio.h>

int main() {
    unsigned int number_of_days, starting_day;
    printf("Enter number of days in month : ");
    scanf("%u", &number_of_days);
    printf("Enter starting day of the week(1 = Sun,7 = Sat) : ");
    scanf("%u", &starting_day);
    unsigned int t = 1;
    for (unsigned int i = 0; i <= number_of_days; ++i) {
        if (t < starting_day) {
            printf("   ");
        } else {
            if (t % 7 == 0) {
                printf("%2u \n", i);
            } else {
                printf("%2u ", i);
            }
        }
        ++t;
    }

    return 0;
}
