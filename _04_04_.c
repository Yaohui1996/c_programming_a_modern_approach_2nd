// 编写一个程序，读入用户输入的整数并按八进制（基数为8）显示出来：
// 输出应为5位数，即便不需要这么多数位也要如此。
// 提示：要把一个数转换成八进制，首先将其除以8，所得的余数是八进制数的最后一位（本例中为1）；
// 然后把原始的数除以8，对除法结果重复上述过程，得到倒数第二位。
// （如第7章所示，printf可以显示八进制的数，所以这个程序实际上有更简单的写法。）

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &x);
    int a, b, c, d, e;
    a = x % 8;
    b = x / 8 % 8;
    c = x / 8 / 8 % 8;
    d = x / 8 / 8 / 8 % 8;
    e = x / 8 / 8 / 8 / 8 % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", e, d, c, b, a);
    return 0;
}
