// 1.
// 编写程序用来要求用户录入国际电话区号，然后在数组country_codes中查找它（见16.3节）。如果
// 找到对应的区号，程序需要显示相应的国家名称，否则显示出错消息。
#include <stdio.h>

struct dialing_code {
    char* country;
    int code;
};

int main() {
    const struct dialing_code country_codes[] = {{"Argentina", 54},
                                                 {"Bangladesh", 880},
                                                 {"Brazi1", 55},
                                                 {"Burma (Myanmar)", 95},
                                                 {"China", 86},
                                                 {"Colombia", 57},
                                                 {"Congo, Dem. Rep. of", 243},
                                                 {"Egypt", 20},
                                                 {"Ethiopia", 251},
                                                 {"France", 33},
                                                 {"Germany", 49},
                                                 {"India ", 91},
                                                 {"Indonesia", 62},
                                                 {"Iran", 98},
                                                 {"Italy", 39},
                                                 {"Japan", 81},
                                                 {"Mexico", 52},
                                                 {"Nigeria", 234},
                                                 {"Pakistan", 92},
                                                 {"Philippines", 63},
                                                 {"Poland", 48},
                                                 {"Russia", 7},
                                                 {"South Africa", 27},
                                                 {"Korea", 82},
                                                 {"Spain", 34},
                                                 {"Sudan", 249},
                                                 {"Thailand", 66},
                                                 {"Turkey", 90},
                                                 {"Ukraine", 380},
                                                 {"United Kingdom", 44},
                                                 {"United States", 1},
                                                 {"Vietnam", 84}};
    const size_t len = sizeof(country_codes) / sizeof(country_codes[0]);

    printf("请输入国际电话区号: ");
    int input_code;
    scanf("%d", &input_code);
    for (size_t i = 0; i != len; ++i) {
        if (country_codes[i].code == input_code) {
            printf("号码 %d 对应的国家为: %s\n", input_code,
                   country_codes[i].country);
            return 0;
        }
    }
    printf("找不到号码 %d 对应的国家!\n", input_code);

    return 0;
}