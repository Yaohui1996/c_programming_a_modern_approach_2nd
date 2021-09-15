// 修改第5章的编程题8，用一个数组存储起飞时间，另一个数组存储抵达时间。
// （时间用整数表示，表示从午夜开始的分钟数。）
// 程序用一个循环搜索起飞时间数组，以找到与用户输入的时间最接近的起飞时间。

// 下面的表格给出了一个城市到另一个城市的每日航班信息。
// 编写一个程序，要求用户输入一个时间（用24小时制的时分表示）。
// 程序选择起飞时间与用户输入最接近的航班，显示出相应的起飞时间和抵达时间。

// 提示：把输入用从午夜开始的分钟数表示。
// 将这个时间与表格里也用从午夜开始的分钟数表示的起飞时间相比。
// 例如，13:15从午夜开始是13×60+15 =
// 795分钟，与下午12:47（从午夜开始是767分钟）最接近。

#include <stdio.h>

// #define DEPARTURE_TIME_0 480   // 8:00 AM
// #define DEPARTURE_TIME_1 583   // 9:43 AM
// #define DEPARTURE_TIME_2 679   // 11:19 AM
// #define DEPARTURE_TIME_3 767   // 12:47 AM
// #define DEPARTURE_TIME_4 840   // 2:00 PM
// #define DEPARTURE_TIME_5 945   // 3:45 PM
// #define DEPARTURE_TIME_6 1140  // 7:00 PM
// #define DEPARTURE_TIME_7 1305  // 9:45 PM

// #define ARRIVE_TIME_0 616   // 10:16 AM
// #define ARRIVE_TIME_1 712   // 11:52 AM
// #define ARRIVE_TIME_2 811   // 1:31 PM
// #define ARRIVE_TIME_3 900   // 3:00 PM
// #define ARRIVE_TIME_4 968   // 4:08 PM
// #define ARRIVE_TIME_5 1075  // 5:55 PM
// #define ARRIVE_TIME_6 1280  // 9:20 PM
// #define ARRIVE_TIME_7 1438  // 11:58 PM

#define N 8

int main() {
    const int DEPARTURE_TIME_ARR[N] = {480, 583, 679,  767,
                                       840, 945, 1140, 1305};
    const int ARRIVE_TIME_ARR[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    int input_time = hour * 60 + min;
    int min_minus = 1440;
    int arrive_hour, arrive_min;
    for (size_t i = 0; i != N; ++i) {
        if (DEPARTURE_TIME_ARR[i] - input_time >= 0 &&
            min_minus > DEPARTURE_TIME_ARR[i] - input_time) {
            min_minus = DEPARTURE_TIME_ARR[i] - input_time;
        }
    }
    for (size_t i = 0; i != N; ++i) {
        if (min_minus + input_time == DEPARTURE_TIME_ARR[i]) {
            arrive_hour = ARRIVE_TIME_ARR[i] / 60;
            arrive_min = ARRIVE_TIME_ARR[i] - arrive_hour * 60;
        }
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
