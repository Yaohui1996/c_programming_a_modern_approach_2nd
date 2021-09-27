// 5.
// 修改第5章的编程题8，以便用一个单独的数组存储时间。数组的元素都是结构，每个结构包含起飞时
// 间和对应的抵达时间。（时间都是整数，表示从午夜开始的分钟数。）程序用一个循环从数组中搜索与
// 用户输入的时间最接近的起飞时间。

#include <stdio.h>

struct time {
    int departure_time;
    int arrive_time;
};

void find_closest_flight(int desired_time, int* departure_time,
                         int* arrival_time, int len,
                         const struct time* time_table) {
    for (int i = 0; i != len; ++i) {
        if (desired_time <= time_table[i].departure_time) {
            *departure_time = time_table[i].departure_time;
            *arrival_time = time_table[i].arrive_time;
            break;
        }
    }
}

int main() {
    // 8:00 AM - 10:16 AM
    // 9:43 AM - 11:52 AM
    // 11:19 AM - 1:31 PM
    // 12:47 AM - 3:00 PM
    // 2:00 PM - 4:08 PM
    // 3:45 PM - 5:55 PM
    // 7:00 PM - 9:20 PM
    // 9:45 PM - 11:58 PM
    const struct time time_table[] = {
        {.departure_time = 480, .arrive_time = 616},
        {.departure_time = 583, .arrive_time = 712},
        {.departure_time = 679, .arrive_time = 811},
        {.departure_time = 767, .arrive_time = 900},
        {.departure_time = 840, .arrive_time = 968},
        {.departure_time = 945, .arrive_time = 1075},
        {.departure_time = 1140, .arrive_time = 1280},
        {.departure_time = 1305, .arrive_time = 1438}};
    int len = sizeof(time_table) / sizeof(time_table[0]);

    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    int input_time = hour * 60 + min;

    int departure_time, arrival_time;
    find_closest_flight(input_time, &departure_time, &arrival_time, len,
                        time_table);

    int depature_hour = departure_time / 60;
    int depature_min = departure_time % 60;
    int arrive_hour = arrival_time / 60;
    int arrive_min = arrival_time % 60;

    printf(
        "Close departure time is %1d%1d:%1d%1d , arriving at "
        "%1d%1d:%1d%1d \n",
        depature_hour / 10, depature_hour % 10, depature_min / 10,
        depature_min % 10, arrive_hour / 10, arrive_hour % 10, arrive_min / 10,
        arrive_min % 10);
    return 0;
}