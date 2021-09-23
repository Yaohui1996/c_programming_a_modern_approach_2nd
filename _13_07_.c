// 7. 修改第5章的编程题11，用字符串指针数组取代switch语句。
// 例如，现在不再用switch语句来显示第一位数字对应的单词，
// 而把该数字用作下标从包含"twenty"、"thirty"等字符串的数组中搜索。

// 编写一个程序，要求用户输入一个两位数，然后显示该数的英文单词：
// 提示：把数分解为两个数字。
// 用一个switch语句显示第一位数字对应的单词（“twenty”、“thirty”等），
// 用第二个switch语句显示第二位数字对应的单词。
// 不要忘记11～19需要特殊处理。

#include <stdio.h>

int main() {
    char* a[] = {"",      "",      "twenty",  "thirty", "forty",
                 "fifty", "sixty", "seventy", "eighty", "ninety"};
    char* b[] = {"",     "one", "two",   "three", "four",
                 "five", "six", "seven", "eight", "nine"};
    char* c[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                 "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    unsigned int input;
    printf("Enter the two-digit number: ");
    scanf("%u", &input);
    unsigned int i = input / 10;
    unsigned int j = input % 10;
    if (i == 1) {
        printf("You entered the number %s\n", c[j]);
    } else {
        printf("You entered the number %s-%s\n", a[i], b[j]);
    }
    return 0;
}
