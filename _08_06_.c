// 网络新手的原型是一个名为B1FF的人，他有一种独特的编写消息的方法。
// 下面是一条常见的B1FF公告：
// H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// 编写一个“B1FF过滤器”，它可以读取用户录入的消息并把此消息翻译成B1FF的表达风格：
// Enter message: Hey dude, C is rilly cool
// In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// 程序需要把消息转换成大写字母，
// 用数字代替特定的字母（A→4, B→8, E→3, I→1, O→0, S→5），
// 然后添加10个左右的感叹号。提示：把原始消息存储在一个字符数组中，然后从数组头开始逐个翻译并显示字符。

#include <ctype.h>
#include <stdio.h>

int main() {
    printf("Enter message: ");
    printf("In B1FF-speak: ");
    char ch;
    ch = getchar();
    ch = toupper(ch);

    while (ch != '\n') {
        if (ch == 'A') {
            printf("4");
        } else if (ch == 'B') {
            printf("8");
        } else if (ch == 'E') {
            printf("3");
        } else if (ch == 'I') {
            printf("1");
        } else if (ch == 'O') {
            printf("0");
        } else if (ch == 'S') {
            printf("5");
        } else {
            printf("%c", ch);
        }
        ch = getchar();

        ch = toupper(ch);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
