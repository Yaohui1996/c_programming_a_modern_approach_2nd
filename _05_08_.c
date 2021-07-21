// 下面的表格给出了一个城市到另一个城市的每日航班信息。
// 编写一个程序，要求用户输入一个时间（用24小时制的时分表示）。
// 程序选择起飞时间与用户输入最接近的航班，显示出相应的起飞时间和抵达时间。

// 提示：把输入用从午夜开始的分钟数表示。
// 将这个时间与表格里也用从午夜开始的分钟数表示的起飞时间相比。
// 例如，13:15从午夜开始是13×60+15 = 795分钟，与下午12:47（从午夜开始是767分钟）最接近。

#include<stdio.h>

#define DEPARTURE_TIME_0 480; // 8:00 AM
#define DEPARTURE_TIME_1 583; // 9:43 AM
#define DEPARTURE_TIME_2 679; // 11:19 AM
#define DEPARTURE_TIME_3 767; // 12:47 AM
#define DEPARTURE_TIME_4 840; // 2:00 PM
#define DEPARTURE_TIME_5 945; // 3:45 PM
#define DEPARTURE_TIME_6 1140; // 7:00 PM
#define DEPARTURE_TIME_7 1305; // 9:45 PM

#define ARRIVE_TIME_0 ; // 10:16 AM
#define ARRIVE_TIME_1 ; // 11:52 AM
#define ARRIVE_TIME_2 ; // 1:31 PM
#define ARRIVE_TIME_3 ; // 3:00 PM
#define ARRIVE_TIME_4 ; // 4:08 PM
#define ARRIVE_TIME_5 ; // 5:55 PM
#define ARRIVE_TIME_6 ; // 9:20 PM
#define ARRIVE_TIME_7 ; // 11:58 PM

int main(){
  int min,sec;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d",min,sec);

  
  printf("Close departure time is 【】, arriving at 【】");
  return 0;
}
