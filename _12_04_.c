// 4. 请利用数组名可以用作指针的事实简化编程题2的(b)的程序。

// 2. (a) 编写程序读一条消息，然后检查这条消息是否是回文
// （消息中的字母从左往右看和从右往左看是一样的）：
// 忽略所有不是字母的字符。用整型变量来跟踪数组中的位置。
// (b) 修改上述程序，使用指针代替整数来跟踪数组中的位置。

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_message_to_array(char a[], const int len_limit, int *len) {
    // read message
    printf("Enter a message: ");
    *len = 0;
    char ch = getchar();
    while (ch != '\n' && *len < len_limit) {
        a[(*len)] = ch;
        ++(*len);
        ch = getchar();
    }
}

// (a)
bool is_Palindrome_a(char a[], int len) {
    int i1 = 0;
    int i2 = len - 1;
    while (i1 < i2) {
        char ch1 = toupper(a[i1]);
        char ch2 = toupper(a[i2]);
        if (ch1 < 'A' || ch1 > 'Z') {
            ++i1;
            continue;
        }
        if (ch2 < 'A' || ch2 > 'Z') {
            --i2;
            continue;
        }
        if (ch1 != ch2) {
            return false;
        } else {
            ++i1;
            --i2;
            continue;
        }
    }
    return true;
}

// (b)
bool is_Palindrome_b(char a[], int len) {
    char *p1 = a;
    char *p2 = a + len - 1;
    while (p1 < p2) {
        char ch1 = toupper(*p1);
        char ch2 = toupper(*p2);
        if (ch1 < 'A' || ch1 > 'Z') {
            ++p1;
            continue;
        }
        if (ch2 < 'A' || ch2 > 'Z') {
            --p2;
            continue;
        }
        if (ch1 != ch2) {
            return false;
        } else {
            ++p1;
            --p2;
            continue;
        }
    }
    return true;
}

int main() {
    const int LEN_LIMIT = 100;
    // read message a
    char a[LEN_LIMIT];
    int len_a = 0;
    read_message_to_array(a, LEN_LIMIT, &len_a);

    // check Palindrome
    bool result_a = is_Palindrome_a(a, len_a);
    result_a ? printf("Palindrome\n") : printf("Not a palindrome\n");

    bool result_b = is_Palindrome_a(a, len_a);
    result_b ? printf("Palindrome\n") : printf("Not a palindrome\n");
    return 0;
}