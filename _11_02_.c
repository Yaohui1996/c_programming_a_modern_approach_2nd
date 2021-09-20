// 修改第5章的编程题8，使其包含下列函数：
// void find_closest_flight(int desired_time, int *departure_time, int
// *arrival_time);
// 函数需查出起飞时间与desired_time（用从午夜开始的分钟数表示）最接近的航班。
// 该航班的起飞时间和抵达时间（也都用午夜开始的分钟数表示）将分别存储在departure_time和arrival_time所指向的变量中。

// 下面的表格给出了一个城市到另一个城市的每日航班信息。
// 编写一个程序，要求用户输入一个时间（用24小时制的时分表示）。
// 程序选择起飞时间与用户输入最接近的航班，显示出相应的起飞时间和抵达时间。

// 提示：把输入用从午夜开始的分钟数表示。
// 将这个时间与表格里也用从午夜开始的分钟数表示的起飞时间相比。
// 例如，13:15从午夜开始是13×60+15 =
// 795分钟，与下午12:47（从午夜开始是767分钟）最接近。

#include <stdio.h>

// 8:00 AM - 10:16 AM
// 9:43 AM - 11:52 AM
// 11:19 AM - 1:31 PM
// 12:47 AM - 3:00 PM
// 2:00 PM - 4:08 PM
// 3:45 PM - 5:55 PM
// 7:00 PM - 9:20 PM
// 9:45 PM - 11:58 PM
const int time_table[8][2] = {{480, 616},   {583, 712},  {679, 811},
                              {767, 900},   {840, 968},  {945, 1075},
                              {1140, 1280}, {1305, 1438}};

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {
    for (int i = 0; i != 8; ++i) {
        if (desired_time <= time_table[i][0]) {
            *departure_time = time_table[i][0];
            *arrival_time = time_table[i][1];
            break;
        }
    }
}

int main() {
    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    int input_time = hour * 60 + min;

    int departure_time, arrival_time;
    find_closest_flight(input_time, &departure_time, &arrival_time);

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
