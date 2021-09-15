// 编写一个程序，提示用户以(xxx)
// xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示该号码：

#include <stdio.h>

int main() {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%u) %u-%u", &a, &b, &c);
    printf("You entered %u.%u.%u\n", a, b, c);
    return 0;
}
