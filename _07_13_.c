// 编写程序计算句子的平均词长：
// Enter a sentence: It was deja vu all over again.
// Average word length: 3.4
// 简单起见，程序中把标点符号看作其前面单词的一部分。平均词长显示一个小数位。

#include <stdio.h>

int main() {
    char ch;
    unsigned int letters_nums = 0;
    unsigned int words_nums = 1;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            ++words_nums;
        } else {
            ++letters_nums;
        }
    }
    printf("Average word length: %.1f\n",
           (double)letters_nums / (double)words_nums);
    return 0;
}
