// 14. 修改第8章的编程题16，使其包含如下函数：
// bool are_anagrams(const char *word1, const char *word2);
// 如果word1和word2指向的字符串是变位词，函数返回true。

// 编程测试两个单词是否为变位词（相同字母的重新排列）：
// Enter first word: smartest
// Enter second word: mattress
// The words are anagrams.
// Enter first word: dumbest
// Enter second word: stumble
// The words are not anagrams.
// 用一个循环逐个字符地读取第一个单词，用一个26元的整数数组记录每个字母的出现次数。
// （例如，读取单词smartest之后，数组包含的值为10001000000010000122000000，
// 表明smartest包含一个a、一个e、一个m、一个r、两个s和两个t。）
// 用另一个循环读取第二个单词，这次每读取一个字母就把相应数组元素的值减1。
// 两个循环都应该忽略不是字母的那些字符，并且不区分大小写。
// 第二个单词读取完毕后，再用一个循环来检查数组元素是否为全0。
// 如果是全0，那么这两个单词就是变位词。
// 提示：可以使用<ctype.h>中的函数，如isalpha和tolower。

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool are_anagrams(const char *word1, const char *word2);

int main() {
    char str1[100];
    char str2[100];
    printf("Enter first word: ");
    gets(str1);

    printf("Enter second word: ");
    gets(str2);

    if (are_anagrams(str1, str2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
    int arr[26] = {0};
    const char *p1 = word1;
    for (; *p1 != '\0'; ++p1) {
        if (isalpha(*p1)) {
            ++arr[toupper(*p1) - 65];
        }
    }
    const char *p2 = word2;
    for (; *p2 != '\0'; ++p2) {
        if (isalpha(*p2)) {
            --arr[toupper(*p2) - 65];
        }
    }

    int flag = 0;
    for (size_t i = 0; i != 26; ++i) {
        if (arr[i] != 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        return true;
    }
    return false;
}
