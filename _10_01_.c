// 修改10.2节的栈示例使它存储字符而不是整数。
// 接下来，增加main函数，用来要求用户输入一串圆括号或花括号，然后指出它们之间的嵌套是否正确：
// Enter parenteses and/or braces:((){}{()})
// Parenteses/braces are nested properly
// 提示：读入左圆括号或左花括号时，把它们像字符一样压入栈中。
// 当读入右圆括号或右花括号时，把栈顶的项弹出，并且检查弹出项是否是匹配的圆括号或花括号。
// （如果不是，那么圆括号或花括号嵌套不正确。）
// 当程序读入换行符时，检查栈是否为空。
// 如果为空，那么圆括号或花括号匹配；
// 如果栈不为空（或者如果曾经调用过stack_underflow函数），那么圆括号或花括号不匹配。
// 如果调用stack_overflow函数，程序显示信息Stack overflow，并且立刻终止。

#include <stdbool.h> /* C99 only */
#include <stdio.h>

#define STACK_SIZE 100

// external variables

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);

int main() {
    printf("Enter parenteses and/or braces: ");
    char ch = getchar();
    while (ch != '\n') {
        if (ch == '(' || ch == '{') {
            push(ch);
            ch = getchar();
        } else if (ch == ')' || ch == '}') {
            char to_pop = pop();
            if (ch == ')' && to_pop == '(') {
                ch = getchar();
                continue;
            } else if (ch == '}' && to_pop == '{') {
                ch = getchar();
                continue;
            } else {
                push(to_pop);
                push(ch);
                break;
            }
        }
    }
    if (!is_empty()) {
        printf("括号不匹配!\n");
    } else {
        printf("括号匹配！\n");
    }

    return 0;
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char ch) {
    if (is_full()) {
        printf("stack满！\n");
    } else {
        contents[top] = ch;
        ++top;
    }
}

char pop(void) {
    if (is_empty()) {
        printf("stack空！\n");
    } else {
        --top;
    }
    return contents[top];
}
