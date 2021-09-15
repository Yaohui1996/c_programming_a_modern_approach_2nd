// 修改第5章的编程题8，要求用户输入12小时制的时间。
// 输入时间的格式为时∶分后跟A、P、AM或PM（大小写均可）。
// 数值时间和AM/PM之间允许有空白（但不强制要求有空白）。
// 有效输入的示例如下：
//
// 1:15P
// 1:15PM
// 1:15p
// 1:15pm
// 1:15 P
// 1:15 PM
// 1:15 p
// 1:15 pm
//
// 可以假定输入的格式就是上述之一，不需要进行错误判定。

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
    int hour, min, input_time;
    char ch;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    ch = getchar();
    ch = toupper(ch);
    while (ch != 'A' && ch != 'P') {
        ch = getchar();
        ch = toupper(ch);
    }
    if (ch == 'A') {
        input_time = hour * 60 + min;
    } else if (ch == 'P') {
        input_time = hour * 60 + min + 720;
    } else {
        printf("请按照正确的格式输入时刻！！！ \n");
        return -1;
    }
    int min_minus = 1440;
    int arrive_hour, arrive_min;
    if (DEPARTURE_TIME_0 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_0 - input_time)
        min_minus = DEPARTURE_TIME_0 - input_time;
    if (DEPARTURE_TIME_1 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_1 - input_time)
        min_minus = DEPARTURE_TIME_1 - input_time;
    if (DEPARTURE_TIME_2 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_2 - input_time)
        min_minus = DEPARTURE_TIME_2 - input_time;
    if (DEPARTURE_TIME_3 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_3 - input_time)
        min_minus = DEPARTURE_TIME_3 - input_time;
    if (DEPARTURE_TIME_4 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_4 - input_time)
        min_minus = DEPARTURE_TIME_4 - input_time;
    if (DEPARTURE_TIME_5 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_5 - input_time)
        min_minus = DEPARTURE_TIME_5 - input_time;
    if (DEPARTURE_TIME_6 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_6 - input_time)
        min_minus = DEPARTURE_TIME_6 - input_time;
    if (DEPARTURE_TIME_7 - input_time >= 0 &&
        min_minus > DEPARTURE_TIME_7 - input_time)
        min_minus = DEPARTURE_TIME_7 - input_time;

    if (min_minus + input_time == DEPARTURE_TIME_0) {
        arrive_hour = ARRIVE_TIME_0 / 60;
        arrive_min = ARRIVE_TIME_0 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_1) {
        arrive_hour = ARRIVE_TIME_1 / 60;
        arrive_min = ARRIVE_TIME_1 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_2) {
        arrive_hour = ARRIVE_TIME_2 / 60;
        arrive_min = ARRIVE_TIME_2 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_3) {
        arrive_hour = ARRIVE_TIME_3 / 60;
        arrive_min = ARRIVE_TIME_3 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_4) {
        arrive_hour = ARRIVE_TIME_4 / 60;
        arrive_min = ARRIVE_TIME_4 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_5) {
        arrive_hour = ARRIVE_TIME_5 / 60;
        arrive_min = ARRIVE_TIME_5 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_6) {
        arrive_hour = ARRIVE_TIME_6 / 60;
        arrive_min = ARRIVE_TIME_6 - arrive_hour * 60;
    }
    if (min_minus + input_time == DEPARTURE_TIME_7) {
        arrive_hour = ARRIVE_TIME_7 / 60;
        arrive_min = ARRIVE_TIME_7 - arrive_hour * 60;
    }

    int depature_hour = (input_time + min_minus) / 60;
    int depature_min = (input_time + min_minus) % 60;

    if (depature_hour > 12 && arrive_hour > 12)
        printf(
            "Close departure time is %1d%1d:%1d%1d p.m., arriving at "
            "%1d%1d:%1d%1d "
            "p.m.\n",
            (depature_hour - 12) / 10, (depature_hour - 12) % 10,
            depature_min / 10, depature_min % 10, (arrive_hour - 12) / 10,
            (arrive_hour - 12) % 10, arrive_min / 10, arrive_min % 10);
    if (depature_hour <= 12 && arrive_hour > 12)
        printf(
            "Close departure time is %1d%1d:%1d%1d a.m., arriving at "
            "%1d%1d:%1d%1d p.m.\n",
            depature_hour / 10, depature_hour % 10, depature_min / 10,
            depature_min % 10, (arrive_hour - 12) / 10, (arrive_hour - 12) % 10,
            arrive_min / 10, arrive_min % 10);
    if (depature_hour <= 12 && arrive_hour <= 12)
        printf(
            "Close departure time is %1d%1d:%1d%1d a.m., arriving at "
            "%1d%1d:%1d%1d a.m.\n",
            depature_hour / 10, depature_hour % 10, depature_min / 10,
            depature_min % 10, arrive_hour / 10, arrive_hour % 10,
            arrive_min / 10, arrive_min % 10);
    return 0;
}
