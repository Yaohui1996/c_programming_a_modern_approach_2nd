/**
 **编写程序，提示用户输入一个数并显示该数，使用字符模拟七段显示器的效果：
 **Enter a number: 491-9014
 **非数字的字符都将被忽略。
 **在程序中用一个名为MAX_DIGITS的宏来控制数的最大位数，MAX_DIGITS的值为10。如果数中包含的数位大于这个数，多出来的数位将被忽略。
 **提示：使用两个外部数组，一个是segments数组（见第8章的练习题6），用于存储表示数字和段之间对应关系的数据；
 **另一个是digits数组，这是一个3行（因为显示出来的每个数字高度都是3个字符）、MAX_DIGITS×4列（数字的宽度是3个字符，但为了可读性需要在数字之间增加一个空格）的字符数组。
 **编写4个函数：main、clear_digits_array、process_digit和print_digits_array。
 **下面是后3个函数的原型：
 **void clear_digits_array(void);
 **void process_digit(int digit, int position);
 **void print_digits_array(void);
 **clear_digits_array函数在digits数组的所有元素中存储空白字符。
 **process_digit函数把digit的七段表示存储到digits数组的指定位置（位置从0到MAX_DIGITS1）。
 **print_digits_array函数分行显示digits数组的每一行，产生出像示例图那样的输出。
 */
// TODO

#include <stdio.h>

int main() {
    printf("1\n");
    char ch = 65;
    printf("%d\n", ch);
    return 0;
}
