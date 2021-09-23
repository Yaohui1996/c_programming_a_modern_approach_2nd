// 编写名为sum.c的程序，用来对命令行参数（假设都是整数）求和。如果键入
// sum 8 24 62
// 运行程序，产生的输出应为
// Total: 94
// 提示：用atoi函数（ 26.2节）把每个命令行参数从字符串格式转换为整数格式。

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int total = 0;
    for (int i = 1; i != argc; ++i) {
        total += atoi(argv[i]);
    }
    printf("Total: %d\n", total);
    return 0;
}