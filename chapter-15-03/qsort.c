// 3.
// 修改9.6节的qsort.c程序，把quicksort函数和split函数放在一个单独的文件quicksort.c中。
// 创建一个名为quicksort.h的头文件来包含这两个函数的原型，并让qsort.c和quicksort.c都包
// 含这个头文件。

/* Sorts an array of integers using Quicksort algorithm */
#include <stdio.h>

#include "quicksort.h"

#define N 10

int main(void) {
    int a[N], i;
    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) scanf("%d", &a[i]);
    quicksort(a, 0, N - 1);
    printf("In sorted order: ");
    for (i = 0; i < N; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
