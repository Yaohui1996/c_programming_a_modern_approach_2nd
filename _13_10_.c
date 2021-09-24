// 10. 修改第7章的编程题11，使其包含如下函数：
// void reverse_name(char *name);
// 在参数name指向的字符串中，名在前姓在后。在修改后的字符串中，姓在前，其后跟一个逗号和一
// 个空格，然后是名的首字母，最后加一个点。原始的字符串中，名的前面、名和姓之间、姓的后面
// 都可以有额外的空格。

// 编写一个程序，根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，
// 最后加一个点：
// Enter a first and last name: Lloyd Fosdick
// Fosdick, L.
// 用户的输入中可能包含空格（名之前、名和姓之间、姓氏之后）。

#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main() {
    char s[100];
    printf("Enter a first and last name: ");
    gets(s);
    reverse_name(s);
    printf("%s\n", s);
    return 0;
}

void reverse_name(char *name) {
    char *p = &name[0];
    // 跳过名前面的空格
    while (*p == ' ') {
        ++p;
    }

    // 获得名的首字母
    char ming = *p;
    ++p;

    // 跳过剩下的名的字母和名和姓之间的空格
    while (*p != ' ') {
        ++p;
    }
    while (*p == ' ') {
        ++p;
    }

    // 保存姓
    char xing[100];
    char *p2 = &xing[0];
    while (*p != '\0') {
        if (*p != ' ') {
            *p2 = *p;
            ++p2;
        }
        ++p;
    }
    *p2 = '\0';  // 字符串末尾'\0'

    // 修改name
    p = &name[0];
    for (size_t i = 0; i != strlen(xing); ++i) {
        *p = xing[i];
        ++p;
    }
    *p = ',';
    ++p;
    *p = ' ';
    ++p;
    *p = ming;
    ++p;
    *p = '.';
    ++p;
    *p = '\0';
}
