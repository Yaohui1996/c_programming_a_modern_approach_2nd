// 编写程序，要求用户录入一串整数（把这串整数存储在数组中），
// 然后通过调用selection_sort函数来排序这些整数。
// 在给定n个元素的数组后，selection_sort函数必须做下列工作：
//  (a) 搜索数组找出最大的元素，然后把它移到数组的最后；
//  (b) 递归地调用函数本身来对前n - 1个数组元素进行排序。

#include <stdio.h>

void selection_sort(int[], size_t);

int main() {
    unsigned int n;
    printf("请输入整数个数: ");
    scanf("%u", &n);
    int arr[n];
    printf("请依次输入%u个整数:\n", n);
    for (size_t i = 0; i != n; ++i) {
        scanf("%d", &arr[i]);
    }

    // 排序前
    for (size_t i = 0; i != n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("start!\n");

    selection_sort(arr, n);

    // 排序后
    for (size_t i = 0; i != n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int arr[], size_t n) {
    int max_value = arr[0];
    size_t max_index = 0;

    // 寻找最大的元素
    for (size_t i = 0; i != n; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }

    // 把最大的元素移动到数组末尾
    for (size_t i = max_index; i != n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = max_value;
    if (n - 1 > 1) {
        selection_sort(arr, n - 1);
    }
}
