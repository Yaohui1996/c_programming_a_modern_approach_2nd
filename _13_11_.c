// 11. 修改第7章的编程题13，使其包含如下函数：
// double compute_average_word_length(const char *sentence);
// 函数返回sentence所指向的字符串中单词的平均长度。

// 编写程序计算句子的平均词长：
// Enter a sentence: It was deja vu all over again.
// Average word length: 3.4
// 简单起见，程序中把标点符号看作其前面单词的一部分。平均词长显示一个小数位。

#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main() {
    char s[100];
    printf("Enter a sentence: ");
    gets(s);
    printf("Average word length: %.1f\n", compute_average_word_length(s));
    return 0;
}

double compute_average_word_length(const char *sentence) {
    double letters_nums = 0.0;
    double words_nums = 1.0;
    const char *p = &sentence[0];
    while (*p != '\0') {
        if (*p == ' ') {
            ++words_nums;
        } else {
            ++letters_nums;
        }
        ++p;
    }
    return letters_nums / words_nums;
}