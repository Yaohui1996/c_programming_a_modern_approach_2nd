// 修改第7章的编程题4，给输出加上标签：
// Enter phone number: 1-800-COL-LECT
// In numeric form: 1-800-265-5328
// 在显示电话号码之前，程序需要将其（以原始格式或数值格式）存储在一个字符数组中。
// 可以假定电话号码的长度不超过15个字符。

// ----------7.4----------
// 编写程序可以把字母格式的电话号码翻译成数值格式：
// （如果没有电话在身边，参考这里给出的字母在键盘上的对应关系：
// 2 = ABC，3 = DEF，4 = GHI，5 = JKL，6 = MNO，7 = PQRS，8 = TUV，9 = WXYZ。）
// 原始电话号码中的非字母字符（例如数字或标点符号）保持不变：
// Enter phone number : 1-800-COL-LECT
// 1-800-265-5328
// 可以假设任何用户输入的字母都是大写字母。

#include <ctype.h>
#include <stdio.h>

int main() {
    char phone_number[15];
    char ch;
    printf("Enter phone number: ");
    size_t i = 0;
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch >= 65 && ch <= 90) {
            if (ch == 'A' || ch == 'B' || ch == 'C') {
                phone_number[i] = '2';
                ++i;
            } else if (ch == 'D' || ch == 'E' || ch == 'F') {
                phone_number[i] = '3';
                ++i;
            } else if (ch == 'G' || ch == 'H' || ch == 'I') {
                phone_number[i] = '4';
                ++i;
            } else if (ch == 'J' || ch == 'K' || ch == 'L') {
                phone_number[i] = '5';
                ++i;
            } else if (ch == 'M' || ch == 'N' || ch == 'O') {
                phone_number[i] = '6';
                ++i;
            } else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
                phone_number[i] = '7';
                ++i;
            } else if (ch == 'T' || ch == 'U' || ch == 'V') {
                phone_number[i] = '8';
                ++i;
            } else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
                phone_number[i] = '9';
                ++i;
            }
        } else {
            phone_number[i] = ch;
            ++i;
        }
    }
    printf("In numeric form: ");
    for (size_t i = 0; i != 15; ++i) {
        printf("%c", phone_number[i]);
    }
    printf("\n");
    return 0;
}
