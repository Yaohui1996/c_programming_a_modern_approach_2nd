// 12.
// 修改第8章的编程题14，读取句子时把单词存储在一个二维的char类型数组中，每行存储一个单词。
// 假定句子中的单词数不超过30，且每个单词的长度都不超过20个字符。
// 注意，要在每个单词的后面存储一个空字符，使其可以作为字符串处理。

// 编写程序颠倒句子中单词的顺序：
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
// 提示：用循环逐个读取字符，然后将它们存储在一个一维字符数组中。
// 当遇到句号、问号或者感叹号（称为“终止字符”）时，终止循环并把终止字符存储在一个char类型变量中。
// 然后再用一个循环反向搜索数组，找到最后一个单词的起始位置。
// 显示最后一个单词，然后反向搜索倒数第二个单词。
// 重复这一过程，直至到达数组的起始位置。最后显示出终止字符。

#include <stdio.h>
#include <string.h>

#define MAX_WORD_NUMS 30
#define MAX_WORD_LENS 20

int main() {
    // 读取
    printf("Enter a sentence: ");
    char str_arr[MAX_WORD_NUMS][MAX_WORD_LENS + 1];

    char str_read[MAX_WORD_NUMS * MAX_WORD_LENS];
    gets(str_read);
    char* p0 = str_read;
    int i = 0;
    int j = 0;
    while (*p0 != '\0' && i < MAX_WORD_NUMS) {
        if (*p0 != ' ') {
            str_arr[i][j] = *p0;
            ++j;
        } else {
            str_arr[i][j] = '\0';
            ++i;
            j = 0;
        }
        ++p0;
    }
    str_arr[i][j] = '\0';
    // 反向输出，最后一个单词单独处理
    // 寻找末尾的字符
    char* p = &str_arr[i][0];
    while (*p != '.' && *p != '?' && *p != '!') {
        printf("%c", *p);
        ++p;
    }
    printf(" ");
    char end_symbol = *p;

    // 反向输出其它单词
    for (int t = i - 1; t >= 0; --t) {
        p = &str_arr[t][0];
        while (*p != '\0') {
            printf("%c", *p);
            ++p;
        }
        if (t != 0) printf(" ");
    }
    printf("%c\n", end_symbol);
    return 0;
}
