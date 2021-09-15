// 修改第7章的编程题5，用数组存储字母的面值。
// 数组有26个元素，对应字母表中的26个字母。
// 例如，数组元素0存储1（因为字母A的面值为1），数组元素1存储3（因为字母B的面值为3），等等。
// 每读取输入单词中的一个字母，程序都会利用该数组确定字符的拼字值。
// 使用数组初始化式来建立该数组。

// ----------7.5----------
// 在十字拼字游戏中，玩家利用小卡片组成单词，每个卡片包含字母和面值。
// 面值根据字母稀缺程度的不同而不同。
// （面值有：1——AEILNORSTU，2——DG，3——BCMP，4——FHVWY，5——K，8——JX，10——QZ。）
// 编写程序通过对单词中字母的面值求和来计算单词的值：
// 编写的程序应该允许单词中混合出现大小写字母。提示：使用toupper库函数。

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    const uint64_t arr[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                              1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char ch;
    uint64_t scrabble_value = 0;
    printf("Enter a word:: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch >= 65 && ch <= 90) scrabble_value += arr[ch - 65];
    }
    printf("Scrabble value: %llu\n", scrabble_value);
    return 0;
}
