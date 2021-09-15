// 第5章的编程题9要求编写程序判断哪个日期更早。泛化该程序，使用户可以输入任意个日期。
// 用0/0/0指示输入结束，不再输入日期。

#include <stdio.h>

int main() {
    unsigned int month, day, year, month_input, day_input, year_input;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%u/%u/%u", &month_input, &day_input, &year_input);
    month = month_input;
    day = day_input;
    year = year_input;
    while (month_input != 0 && day_input != 0 && year_input != 0) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%u/%u/%u", &month_input, &day_input, &year_input);
        if (month_input != 0 && day_input != 0 && year_input != 0) {
            if (year < year_input) {
                continue;
            } else if (year > year_input) {
                year = year_input;
                month = month_input;
                day = day_input;
            } else {
                if (month < month_input) {
                    continue;
                } else if (month > month_input) {
                    year = year_input;
                    month = month_input;
                    day = day_input;
                } else {
                    if (day > day_input) {
                        year = year_input;
                        month = month_input;
                        day = day_input;
                    } else {
                        continue;
                    }
                }
            }
        }
    }

    printf("%u/%u/%1u%1u is the earliest date\n", month, day, year / 10,
           year % 10);

    return 0;
}
