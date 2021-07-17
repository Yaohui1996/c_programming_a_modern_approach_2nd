#include<stdio.h>

int main() {
    printf("测试完毕");
    size_t n = 12;
    int a[n];
    for (size_t i = 0; i != n;++i) {
        a[i] = i * i * i;
    }
    for (size_t i = 0; i != n;++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}
