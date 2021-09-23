// 4. 编写名为reverse.c的程序，用来逆序输出命令行参数。如果键入
// reverse void and null
// 运行程序，产生的输出应为
// null and void

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    for (int i = argc - 1; i >= 1; --i) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}