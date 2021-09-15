// 编写程序统计句子中元音字母（a、e、i、o、u）的个数：
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    uint64_t nums = 0;
    printf("Enter a sentence: ");

    char ch;
    while ((ch = getchar()) != '\n') {
        ch = tolower((int)ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++nums;
        }
    }
    printf("Your sentence contains %llu vowels.\n", nums);

    return 0;
}
