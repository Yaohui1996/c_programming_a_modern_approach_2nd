// 17. 修改第12章的编程题2，使其包含如下函数：
// bool is_palindrome(const char *message);
// 如果message指向的字符串是回文，函数返回true。

// 2. (a) 编写程序读一条消息，然后检查这条消息是否是回文
// （消息中的字母从左往右看和从右往左看是一样的）：
// 忽略所有不是字母的字符。用整型变量来跟踪数组中的位置。
// (b) 修改上述程序，使用指针代替整数来跟踪数组中的位置。

// #include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(const char *message) {
    const char *i = &message[0];
    const char *j = &message[strlen(message) - 1];
    while (i < j) {
        if (*i != *j) {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

int main() {
    const int LEN_LIMIT = 100;
    char a[LEN_LIMIT];
    // read message a
    gets(a);

    // check Palindrome
    bool result = is_palindrome(a);
    result ? printf("Palindrome\n") : printf("Not a palindrome\n");
    return 0;
}