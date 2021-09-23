// 2. 按如下方式改进13.5节的remind.c程序。
// (a) 如果对应的日期为负数或大于31，程序显示出错信息，并忽略提醒。
// 提示：使用continue语句。
// (b) 允许用户输入日期、24小时格式的时间和提醒。
// 显示的提醒列表必须先按日期排序，然后再按时间排序。
// （原始的remind.c程序允许用户输入时间，但是它把时间作为提醒的一部分来处理。）
// (c) 程序显示一年的提醒列表。要求用户按照月/日的格式输入日期。

/* Prints a one-month reminder list */
#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */
int read_line(char str[], int n);
int main(void) {
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char date_str[12], msg_str[MSG_LEN + 1];
    int month, day, hour, min, i, j, num_remind = 0;
    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");
        scanf("%2d/%2d %2d:%2d", &month, &day, &hour, &min);
        if (month == 0 && day == 0 && hour == 0 && min == 0) break;
        if (month < 0 || month > 12) {
            printf("month不能为负数，且不能大于12！\n");
            continue;
        }
        if (day < 0 || day > 31) {
            printf("day不能为负数，且不能大于31！\n");
            continue;
        }

        sprintf(date_str, "%2d/%2d %2d:%2d", month, day, hour, min);

        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++)
            if (strcmp(date_str, reminders[i]) < 0) break;
        for (j = num_remind; j > i; j--) strcpy(reminders[j], reminders[j - 1]);
        strcpy(reminders[i], date_str);
        strcat(reminders[i], msg_str);
        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) printf(" %s\n", reminders[i]);
    return 0;
}
int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;
    str[i] = '\0';
    return i;
}