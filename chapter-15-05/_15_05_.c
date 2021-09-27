// 5. 修改第10章的编程题6，使其具有独立的stack.h和stack.c文件，如15.2节所述。

// 有些计算器（尤其是惠普的计算器）使用逆波兰表示法（ReversePolish Notation,
// RPN）来书写数学表达式。
// 在这一表示法中，运算符放置在操作数的后面而不是放在操作数中间。
// 例如，在逆波兰表示法中1+2将表示为12 +，而1+2*3将表示为123 * +。
// 逆波兰表达式可以很方便地用栈求值。
// 算法从左向右读取运算符和操作数，并执行下列步骤。
// (1) 当遇到操作数时，将其压入栈中。
// (2) 当遇到运算符时，从栈中弹出它的操作数，执行运算并把结果压入栈中。
// 编写程序对逆波兰表达式求值。
// 操作数都是个位的整数，运算符为+、-、*、/和=。
// 遇到运算符=时，将显示栈顶项，随后清空栈并提示用户计算新的表达式。
// 这一过程持续进行，直到用户输入一个既不是运算符也不是操作数的字符为止：

// 如果栈出现上溢，程序将显示消息Expression is too complex并终止。
// 如果栈出现下溢（例如遇到表达式12 + +），程序将显示消息Notenough operands in
// expression并终止。 提示：把10.2节的栈代码整合到你的程序中。 使用scanf("%c",
// &ch)读取运算符和操作数。

#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main() {
    printf("Enter an RPN expression: ");
    make_empty();
    char ch = getchar();
    while (true) {
        if (ch >= '0' && ch <= '9') {
            push(ch - 48);
        } else if (ch == '+') {
            int a = pop();
            int b = pop();
            push(b + a);
        } else if (ch == '-') {
            int a = pop();
            int b = pop();
            push(b - a);
        } else if (ch == '*') {
            int a = pop();
            int b = pop();
            push(b * a);
        } else if (ch == '/') {
            int a = pop();
            int b = pop();
            push(b / a);
        } else if (ch == '=') {
            printf("Value of expression: %d\n", pop());
        } else if (ch == ' ') {
            ch = getchar();
            continue;
        } else {
            break;
        }
        ch = getchar();
        // print_stack();
    }
    return 0;
}
