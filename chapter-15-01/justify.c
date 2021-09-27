// 1. 15.3节的justify程序通过在单词间插入额外的空格来调整行。当前编写的函数writen_line的工
// 作方法是，与开始处的单词间隔相比，靠近行末尾单词的间隔略微宽一些。（例如，靠近末尾的单
// 词彼此之间可能有3个空格，而靠近开始的单词彼此之间可能只有2个空格。）请修改函数write_line
// 来改进此程序，要求函数能够使较大的间隔交替出现在行的末尾和行的开头。

/* Formats a file of text */
#include <string.h>

#include "line.h"
#include "word.h"
#define MAX_WORD_LEN 20
int main(void) {
    char word[MAX_WORD_LEN + 2];
    int word_len;
    clear_line();
    for (;;) {
        read_word(word, MAX_WORD_LEN + 1);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len > MAX_WORD_LEN) word[MAX_WORD_LEN] = '*';
        if (word_len + 1 > space_remaining()) {
            write_line();
            clear_line();
        }
        add_word(word);
    }
}