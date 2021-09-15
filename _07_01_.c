// 如果i*i超出了int类型的最大取值，那么6.3节的程序square2.c将失败（通常会显示奇怪的答案）。
// 运行该程序，并确定导致失败的n的最小值。[n = 46341]
// 尝试把变量i的类型改成short并再次运行该程序。
// （不要忘记更新printf函数调用中的转换说明！）然后尝试改成long。
// 从这些实验中，你能总结出在你的机器上用于存储整数类型的位数是多少吗？

/* Prints a table of squares using a for statement */
#include <stdint.h>
#include <stdio.h>

int main(void) {
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long int: %zu\n", sizeof(long int));
    printf("long long int: %zu\n", sizeof(long long int));

    printf("uint8_t: %zu\n", sizeof(uint8_t));
    printf("uint16_t: %zu\n", sizeof(uint16_t));
    printf("uint32_t: %zu\n", sizeof(uint32_t));
    printf("uint64_t: %zu\n", sizeof(uint64_t));

    printf("int8_t: %zu\n", sizeof(int8_t));
    printf("int16_t: %zu\n", sizeof(int16_t));
    printf("int32_t: %zu\n", sizeof(int32_t));
    printf("int64_t: %zu\n", sizeof(int64_t));

    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));

    return 0;
}
