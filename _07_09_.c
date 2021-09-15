// 编写程序要求用户输入12小时制的时间，然后用24小时制显示该时间：
// Enter a 12-hour time: 9:11 PM
// Equivalent 24-hour time: 21:11
// 参考编程题8中关于输入格式的描述。

#include <ctype.h>
#include <stdio.h>

#define DEPARTURE_TIME_0 480   // 8:00 AM
#define DEPARTURE_TIME_1 583   // 9:43 AM
#define DEPARTURE_TIME_2 679   // 11:19 AM
#define DEPARTURE_TIME_3 767   // 12:47 AM
#define DEPARTURE_TIME_4 840   // 2:00 PM
#define DEPARTURE_TIME_5 945   // 3:45 PM
#define DEPARTURE_TIME_6 1140  // 7:00 PM
#define DEPARTURE_TIME_7 1305  // 9:45 PM

#define ARRIVE_TIME_0 616   // 10:16 AM
#define ARRIVE_TIME_1 712   // 11:52 AM
#define ARRIVE_TIME_2 811   // 1:31 PM
#define ARRIVE_TIME_3 900   // 3:00 PM
#define ARRIVE_TIME_4 968   // 4:08 PM
#define ARRIVE_TIME_5 1075  // 5:55 PM
#define ARRIVE_TIME_6 1280  // 9:20 PM
#define ARRIVE_TIME_7 1438  // 11:58 PM

int main() {
    int hour, min;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &min);
    ch = getchar();
    ch = toupper(ch);
    while (ch != 'A' && ch != 'P') {
        ch = getchar();
        ch = toupper(ch);
    }
    if (ch == 'A') {
    } else if (ch == 'P') {
        hour += 12;
    } else {
        printf("请按照正确的格式输入时刻！！！ \n");
        return -1;
    }
    printf("Equivalent 24-hour time: %d:%d\n", hour, min);
    return 0;
}
