/**
 **有些计算器（尤其是惠普的计算器）使用逆波兰表示法（Reverse Polish Notation,
 **RPN）来书写数学表达式。
 **在这一表示法中，运算符放置在操作数的后面而不是放在操作数中间。
 **例如，在逆波兰表示法中1+2将表示为1 2 +，而1+2*3将表示为1 2 3 * +。
 **逆波兰表达式可以很方便地用栈求值。
 **算法从左向右读取运算符和操作数，并执行下列步骤。
 **(1) 当遇到操作数时，将其压入栈中。
 **(2) 当遇到运算符时，从栈中弹出它的操作数，执行运算并把结果压入栈中。
 **编写程序对逆波兰表达式求值。操作数都是个位的整数，运算符为+、-、*、/和=。
 **遇到运算符=时，将显示栈顶项，随后清空栈并提示用户计算新的表达式。
 **这一过程持续进行，直到用户输入一个既不是运算符也不是操作数的字符为止：
 **Enter an RPN expression: 1 2 3 * + =
 **Value of expression: 7
 **Enter an RPN expression: 5 8 * 4 9 - / =
 **Value of expression: -8
 **Enter an RPN expression: q
 **如果栈出现上溢，程序将显示消息Expression is too complex并终止。
 **如果栈出现下溢（例如遇到表达式1 2 + +），程序将显示消息Not enough operands in
 **expression并终止。 提示：把10.2节的栈代码整合到你的程序中。 使用scanf(" %c",
 **&ch)读取运算符和操作数。
 */
// TODO

#include <stdio.h>

int main() {
    printf("1\n");
    char ch = 65;
    printf("%d\n", ch);
    return 0;
}
