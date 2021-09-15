// 编写一个程序，提示用户输入两个日期，然后显示哪一个日期更早：

#include <stdio.h>

int main() {
    unsigned int month_first, day_first, year_first, month_second, day_second,
        year_second;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%u/%u/%u", &month_first, &day_first, &year_first);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%u/%u/%u", &month_second, &day_second, &year_second);

    if (year_first < year_second) {
        printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n", month_first,
               day_first, year_first / 10, year_first % 10, month_second,
               day_second, year_second / 10, year_second % 10);
    } else if (year_first > year_second) {
        printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n", month_second,
               day_second, year_second / 10, year_second % 10, month_first,
               day_first, year_first / 10, year_first % 10);
    } else {
        if (month_first < month_second) {
            printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n", month_first,
                   day_first, year_first / 10, year_first % 10, month_second,
                   day_second, year_second / 10, year_second % 10);
        } else if (month_first > month_second) {
            printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n", month_second,
                   day_second, year_second / 10, year_second % 10, month_first,
                   day_first, year_first / 10, year_first % 10);
        } else {
            if (day_first < day_second) {
                printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n",
                       month_first, day_first, year_first / 10, year_first % 10,
                       month_second, day_second, year_second / 10,
                       year_second % 10);
            } else if (day_first > day_second) {
                printf("%u/%u/%1u%1u is earlier than %u/%u/%1u%1u\n",
                       month_second, day_second, year_second / 10,
                       year_second % 10, month_first, day_first,
                       year_first / 10, year_first % 10);
            } else {
                printf("%u/%u/%1u%1u is equal to %u/%u/%1u%1u\n", month_second,
                       day_second, year_second / 10, year_second % 10,
                       month_first, day_first, year_first / 10,
                       year_first % 10);
            }
        }
    }
    return 0;
}
