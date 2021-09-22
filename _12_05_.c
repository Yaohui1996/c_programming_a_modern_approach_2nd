// 修改第8章的编程题14，用指针而不是整数来跟踪包含该语句的数组的当前位置。

// 编写程序颠倒句子中单词的顺序：
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
// 提示：用循环逐个读取字符，然后将它们存储在一个一维字符数组中。
// 当遇到句号、问号或者感叹号（称为“终止字符”）时，终止循环并把终止字符存储在一个char类型变量中。
// 然后再用一个循环反向搜索数组，找到最后一个单词的起始位置。
// 显示最后一个单词，然后反向搜索倒数第二个单词。
// 重复这一过程，直至到达数组的起始位置。最后显示出终止字符。

#include <stdio.h>

int main() {
    printf("Enter a sentence: ");
    char char_arr[100];
    char* p = &char_arr[0];
    char ch;
    ch = getchar();
    while (ch != '.' && ch != '?' && ch != '!') {
        *p = ch;
        ch = getchar();
        ++p;
    }
    // 保存终止字符
    char end_symbol = ch;

    // 反向输出
    while (p >= &char_arr[0]) {
        char* end_p = p;
        char* start_p = &char_arr[0];
        while (*p != ' ' && p >= &char_arr[0]) {
            --p;
        }
        start_p = p + 1;
        for (char* j = start_p; j <= end_p; ++j) {
            printf("%c", *j);
        }
        if (p > &char_arr[0]) {
            printf(" ");
        }
        --p;
    }
    printf("%c\n", end_symbol);
    return 0;
}
