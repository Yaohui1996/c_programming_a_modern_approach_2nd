// 编写程序显示sizeof(int)、sizeof(short)、sizeof(long)、sizeof(float)、sizeof(double)
// 和sizeof(long double)的值

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
