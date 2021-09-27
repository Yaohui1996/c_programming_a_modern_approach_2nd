// 6.
// 修改第5章的编程题9，以便用户输入的日期都存储在一个date结构（见练习题5）中。
// 把练习题5中 的compare_dates函数集成到你的程序中。

// 编写一个程序，提示用户输入两个日期，然后显示哪一个日期更早：

#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2) {
    if (d1.year < d2.year) {
        return -1;
    } else if (d1.year > d2.year) {
        return 1;
    } else {
        if (d1.month < d2.month) {
            return -1;
        } else if (d1.month > d2.month) {
            return 1;
        } else {
            if (d1.day < d2.day) {
                return -1;
            } else if (d1.day > d2.day) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}

int main() {
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    int compare_result = compare_dates(d1, d2);
    if (compare_result == 0) {
        printf("两个日期一样早.\n");
    } else if (compare_result < 0) {
        printf("第一个日期早.\n");
    } else {
        printf("第二个日期早.\n");
    }

    return 0;
}
