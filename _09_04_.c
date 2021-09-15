// 修改第8章的编程题16，使其包含下列函数：
// void read_word(int counts[26]);
// bool equal_array(int counts1[26], int counts2[26]);
// main函数将调用read_word两次，每次用于读取用户输入的一个单词。
// 读取单词时，read_word用单词中的字母更新counts数组，详见原题的描述。
// （main将声明两个数组，每个数组用于一个单词。这些数组用于跟踪单词中每个字母出现的次数。）
// 接下来，main函数调用equal_array函数，以前面提到的两个数组作为参数。
// 如果两个数组中的元素相同（表明这两个单词是变位词），equal_array返回true，否则返回false。

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

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main() {
    int arr_1[26] = {0};
    int arr_2[26] = {0};

    printf("Enter first word: ");
    read_word(arr_1);

    printf("Enter second word: ");
    read_word(arr_2);

    if (equal_array(arr_1, arr_2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

void read_word(int counts[26]) {
    char ch;
    ch = getchar();
    ch = toupper(ch);
    while (ch != '\n') {
        if (isalpha(ch)) {
            ++counts[ch - 65];
        }
        ch = getchar();
        ch = toupper(ch);
    }
}
bool equal_array(int counts1[26], int counts2[26]) {
    for (size_t i = 0; i != 26; ++i) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}
