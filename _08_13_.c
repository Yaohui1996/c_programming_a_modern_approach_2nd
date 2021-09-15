// 修改第7章的编程题11，给输出加上标签：
// Enter a first and last name: Lloyd Fosdick
// You enered the name: Fosdick, L.
// 在显示姓氏（不是名字）之前，程序需要将其存储在一个字符数组中。
// 可以假定姓氏的长度不超过20个字符。

// 编写一个程序，根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，
// 最后加一个点：
// Enter a first and last name: Lloyd Fosdick
// Fosdick, L.
// 用户的输入中可能包含空格（名之前、名和姓之间、姓氏之后）。

#include <stdio.h>

int main() {
    printf("Enter a first and last name: ");
    char ch_f;
    ch_f = getchar();
    while (ch_f == ' ') {
        ch_f = getchar();
    }

    char ch_l;
    ch_l = getchar();
    while (ch_l != ' ') {
        ch_l = getchar();
    }

    while (ch_l == ' ') {
        ch_l = getchar();
    }

    char xing[20];
    size_t i = 0;
    while (ch_l != ' ' && ch_l != '\n') {
        xing[i] = ch_l;
        // printf("%c", ch_l);
        ch_l = getchar();
        ++i;
    }

    for (size_t i = 0; i != 20; ++i) printf("%c", xing[i]);
    printf(", %c.\n", ch_f);

    return 0;
}
