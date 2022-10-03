// 15. 修改第10章的编程题6，使其包含如下函数：
// int evaluate_RPN_expression(const char *expression);
// 函数返回expression指向的RPN表达式的值。

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
#include <string.h>

#define STACK_SIZE 10
/* external variables */
int contents[STACK_SIZE];
int top = 0;
void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void stack_overflow() {
    printf("Expression is too complex!\n");
    exit(-1);
}
void stack_underflow() {
    printf("Notenough operands in expression!\n");
    exit(-1);
}
void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void) {
    if (!is_empty()) {
        return contents[--top];
    }
    stack_underflow();
    return -1;
}
void print_stack() {
    for (int i = 0; i != STACK_SIZE; ++i) {
        printf("[index=%d] [value=%d]\n", i, contents[i]);
    }
}

int evaluate_RPN_expression(const char* expression) {
    make_empty();
    const char* p = &expression[0];
    int ret = 0;
    while (p < &expression[strlen(expression)]) {
        if (*p >= '0' && *p <= '9') {
            push(*p - 48);
        } else if (*p == '+') {
            int a = pop();
            int b = pop();
            push(b + a);
        } else if (*p == '-') {
            int a = pop();
            int b = pop();
            push(b - a);
        } else if (*p == '*') {
            int a = pop();
            int b = pop();
            push(b * a);
        } else if (*p == '/') {
            int a = pop();
            int b = pop();
            push(b / a);
        } else if (*p == '=') {
            ret = pop();
        } else if (*p == ' ') {
            ++p;
            continue;
        } else {
            break;
        }
        ++p;
        // print_stack();
    }
    return ret;
}

int main() {
    char expression[100];
    printf("Enter an RPN expression: ");
    gets(expression);
    int result = evaluate_RPN_expression(expression);
    printf("Value of expression: %d\n", result);
    return 0;
}
