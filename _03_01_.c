// 编写一个程序，以月/日/年（即mm/dd/yy）的格式接受用户录入的日期信息
// 并以年月日（即yyyymmdd）的格式将其显示出来

#include<stdio.h>

int main() {
    unsigned int day;
    unsigned int month;
    unsigned int year;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);
    if (month < 10) {
        printf("You entered the date %d0%d%d\n", year, month, day);
    }

    return 0;
}
