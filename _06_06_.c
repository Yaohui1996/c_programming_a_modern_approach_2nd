// 编写程序，提示用户输入一个数n ，然后显示出1～n的所有偶数平方值。
// 例如，如果用户输入100，那么程序应该显示出下列内容：

#include <stdio.h>

int main() {
    int n;
    printf("请输入一个数: ");
    scanf("%d", &n);
    int i = 1;
    while (i * i <= n) {
        if (i * i % 2 == 0) {
            printf("%d\n", i * i);
        }
        ++i;
    }
    return 0;
}
