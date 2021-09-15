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
    int i = 0;
    char ch;
    ch = getchar();
    while (ch != '.' || ch != '?' || ch != '!') {
        char_arr[i] = ch;
        ch = getchar();
        ++i;
    }

    // 保存终止字符
    char end_symbol = getchar();

    for (int t = 0; t <= i; ++t) printf("%c", char_arr[t]);

    // 反向输出

    while (i >= 0) {
        int end_i = i;
        int start_i = 0;
        while (char_arr[i] != ' ' && i != 0) {
            --i;
        }
        start_i = i + 1;
        for (int j = start_i; j <= end_i; ++j) printf("%c", char_arr[j]);
        --i;
    }
    printf("%c\n", end_symbol);
    return 0;
}
