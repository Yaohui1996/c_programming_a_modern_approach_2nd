// 9. 修改第7章的编程题10，使其包含如下函数：
// int compute_vowel_count(const char *sentence);
// 函数返回sentence所指向的字符串中元音字母的个数。

// 编写程序统计句子中元音字母（a、e、i、o、u）的个数：
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *sentence);

int main() {
    char s[100];
    printf("Enter a sentence: ");
    gets(s);
    int nums = compute_vowel_count(s);
    printf("Your sentence contains %d vowels.\n", nums);
    return 0;
}

int compute_vowel_count(const char *sentence) {
    int nums = 0;
    size_t len = strlen(sentence);
    for (size_t i = 0; i != len; ++i) {
        char ch = sentence[i];
        ch = tolower((int)ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++nums;
        }
    }
    return nums;
}
