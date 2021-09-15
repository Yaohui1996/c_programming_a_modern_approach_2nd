// 在十字拼字游戏中，玩家利用小卡片组成单词，每个卡片包含字母和面值。
// 面值根据字母稀缺程度的不同而不同。
// （面值有：1——AEILNORSTU，2——DG，3——BCMP，4——FHVWY，5——K，8——JX，10——QZ。）
// 编写程序通过对单词中字母的面值求和来计算单词的值：
// 编写的程序应该允许单词中混合出现大小写字母。提示：使用toupper库函数。

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    char ch;
    uint64_t scrabble_value = 0;
    printf("Enter a word:: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch >= 65 && ch <= 90) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' ||
                ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U') {
                scrabble_value += 1;
            } else if (ch == 'D' || ch == 'G') {
                scrabble_value += 2;
            } else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') {
                scrabble_value += 3;
            } else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' ||
                       ch == 'Y') {
                scrabble_value += 4;
            } else if (ch == 'K') {
                scrabble_value += 5;
            } else if (ch == 'J' || ch == 'X') {
                scrabble_value += 8;
            } else if (ch == 'Q' || ch == 'Z') {
                scrabble_value += 10;
            }
        }
    }
    printf("Scrabble value: %llu\n", scrabble_value);
    return 0;
}
