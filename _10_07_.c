// 编写程序，提示用户输入一个数并显示该数，使用字符模拟七段显示器的效果：
// 非数字的字符都将被忽略。
// 在程序中用一个名为MAX_DIGITS的宏来控制数的最大位数，MAX_DIGITS的值为10。
// 如果数中包含的数位大于这个数，多出来的数位将被忽略。
// 提示：使用两个外部数组，一个是segments数组（见第8章的练习题6），用于存储表示数字和段之间对应关系的数据；
// 另一个是digits数组，这是一个3行（因为显示出来的每个数字高度都是3个字符）、MAX_DIGITS×4列（数字的宽度是3个字符，但为了可读性需要在数字之间增加一个空格）的字符数组。
// 编写4个函数：main、clear_digits_array、process_digit和print_digits_array。
// 下面是后3个函数的原型：
// void clear_digits_array(void);
// void process_digit(int digit, int position);
// void print_digits_array(void);
// clear_digits_array函数在digits数组的所有元素中存储空白字符。
// process_digit函数把digit的七段表示存储到digits数组的指定位置（位置从0到MAX_DIGITS-1）。
// print_digits_array函数分行显示digits数组的每一行，产生出像示例图那样的输出。

#include <stdio.h>

#define MAX_DIGITS 10

const int segment[MAX_DIGITS][7] = {
    {1, 1, 1, 1, 1, 1, 0},  // 0
    {0, 1, 1, 0, 0, 0, 0},  // 1
    {1, 1, 0, 1, 1, 0, 1},  // 2
    {1, 1, 1, 1, 0, 0, 1},  // 3
    {0, 1, 1, 0, 0, 1, 1},  // 4
    {1, 0, 1, 1, 0, 1, 1},  // 5
    {1, 0, 1, 1, 1, 1, 1},  // 6
    {1, 1, 1, 0, 0, 0, 0},  // 7
    {1, 1, 1, 1, 1, 1, 1},  // 8
    {1, 1, 1, 1, 0, 1, 1}   // 9
};
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main() {
    int read_digits[MAX_DIGITS] = {0};
    printf("Enter a number: ");
    char ch = getchar();
    int has_read = 0;
    while (has_read < MAX_DIGITS) {
        if (ch == '\n') {
            break;
        }
        if (ch >= '0' && ch <= '9') {
            read_digits[has_read] = ch - 48;
            ++has_read;
        }
        ch = getchar();
    }

    // 清理
    clear_digits_array();

    // 依次处理每一个数字
    for (int i = 0; i != has_read; ++i) {
        // printf("%d ", read_digits[i]);
        process_digit(read_digits[i], i);
    }

    // 输出
    print_digits_array();

    return 0;
}

void clear_digits_array() {
    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != MAX_DIGITS * 4; ++j) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    if (segment[digit][0] == 1) {
        digits[0][4 * position + 1] = '_';
    }
    if (segment[digit][5] == 1) {
        digits[1][4 * position] = '|';
    }
    if (segment[digit][6] == 1) {
        digits[1][4 * position + 1] = '_';
    }
    if (segment[digit][1] == 1) {
        digits[1][4 * position + 2] = '|';
    }
    if (segment[digit][4] == 1) {
        digits[2][4 * position] = '|';
    }
    if (segment[digit][3] == 1) {
        digits[2][4 * position + 1] = '_';
    }
    if (segment[digit][2] == 1) {
        digits[2][4 * position + 2] = '|';
    }
}

void print_digits_array() {
    for (int i = 0; i != 3; ++i) {
        for (int j = 0; j != MAX_DIGITS * 4; ++j) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}