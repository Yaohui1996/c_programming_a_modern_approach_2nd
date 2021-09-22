// 7. 修改11.4节的maxmin.c程序，
// 使得max_min函数使用指针而不是整数来跟踪数组中的当前位置。

/* Finds the largest and smallest elements in an array */
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int b[N], i, big, small;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) scanf("%d", &b[i]);
    max_min(b, N, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    return 0;
}
void max_min(int a[], int n, int *max, int *min) {
    int *p;
    *max = *min = a[0];
    for (p = a + 1; p < a + n; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}