// 1. 编写程序找出一组单词中“最小”单词和“最大”单词。
// 用户输入单词后，程序根据字典顺序决定排在最前面和最后面的单词。
// 当用户输入4个字母的单词时，程序停止读入。
// 假设所有单词都不超过20个字母。
// 程序会话如下：

// 提示：使用两个名为smallest_word和largest_word的字符串来分别记录所有输入中的“最小”单词和“最大”单词。
// 用户每输入一个新单词，都要用strcmp函数把它与smallest_word进行比较。
// 如果新的单词比smallest_word“小”，就用strcpy函数把新单词保存到smallest_word中。
// 用类似的方式与larges_word进行比较。
// 用strlen函数来判断用户是否输入了4个字母的单词。

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main() {
    char smallest_word[MAX_LEN + 1];
    char largest_word[MAX_LEN + 1];

    printf("Enter word: ");
    char input_str[MAX_LEN + 1];
    scanf("%s", input_str);

    strncpy(smallest_word, input_str, sizeof(input_str) / sizeof(char) - 1);
    smallest_word[sizeof(input_str) / sizeof(char) - 1] = '\0';

    strncpy(largest_word, input_str, sizeof(input_str) / sizeof(char) - 1);
    largest_word[sizeof(input_str) / sizeof(char) - 1] = '\0';

    size_t input_len = strlen(input_str);
    while (input_len != 4) {
        if (strcmp(input_str, smallest_word) < 0) {
            strncpy(smallest_word, input_str,
                    sizeof(input_str) / sizeof(char) - 1);
            smallest_word[sizeof(input_str) / sizeof(char) - 1] = '\0';
        }
        if (strcmp(input_str, largest_word) > 0) {
            strncpy(largest_word, input_str,
                    sizeof(input_str) / sizeof(char) - 1);
            largest_word[sizeof(input_str) / sizeof(char) - 1] = '\0';
        }
        printf("Enter word: ");
        scanf("%s", input_str);
        input_len = strlen(input_str);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}