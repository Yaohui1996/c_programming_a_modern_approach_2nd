// 编写程序打印n×n的幻方（1, 2, ..., n2的方阵排列，
// 且每行、每列和每条对角线上的和都相等）。
// 由用户指定n的值：
// This program creates a magic square of a specified size.
// The size must be an odd number between 1 and 99.
// Enter size of magic square: 5
//  17 24 1 8 15
//  23 5 7 14 16
//  4 6 13 20 22
//  10 12 19 21 3
//  11 18 25 2 9
// 把幻方存储在一个二维数组中。
// 起始时把数1放在0行的中间，剩下的数2, 3, ...,
// n^2依次向上移动一行并向右移动一列。
// 当可能越过数组边界时需要“绕回”到数组的另一端。
// 例如，如果需要把下一个数放到-1行，我们就将其存储到n-1行（最后一行）；
// 如果需要把下一个数放到n列，我们就将其存储到0列。
// 如果某个特定的数组元素已被占用，那就把该数存储在前一个数的正下方。
// 如果你的编译器支持变长数组，声明数组有n行n列，否则声明数组有99行99列。

#include <stdio.h>

int main() {
    printf("This program creates a magic square of a specified size. ");
    printf("The size must be an odd number between 1 and 99. ");

    int arr[99][99] = {0};

    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int i = 0;
    int j = n / 2;
    int num = 1;

    arr[i][j] = num;
    ++num;

    while (num <= n * n) {
        // 更新i
        if (i - 1 == -1) {
            i = n - 1;
        } else {
            --i;
        }

        // 更新j
        if (j + 1 == n) {
            j = 0;
        } else {
            ++j;
        }

        // 更新arr[i][j]
        if (arr[i][j] != 0) {
            // 还原顺序先左后下
            // 更新j
            if (j - 1 == -1) {
                j = n - 1;
            } else {
                --j;
            }
            // 更新i
            if (i + 1 == n) {
                i = 0;
            } else {
                ++i;
            }

            // 再次前进
            ++i;
        }
        // 赋值
        arr[i][j] = num;

        // 更新num
        ++num;
    }

    // 输出
    for (int i = 0; i != n; ++i) {
        for (int j = 0; j != n; ++j) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    // 对行求和
    for (int i = 0; i != n; ++i) {
        int sum = 0;
        for (int j = 0; j != n; ++j) {
            sum += arr[i][j];
        }
        printf("第%d行的和为：%d \n", i + 1, sum);
    }
    printf("\n");
    // 对列求和
    for (int j = 0; j != n; ++j) {
        int sum = 0;
        for (int i = 0; i != n; ++i) {
            sum += arr[i][j];
        }
        printf("第%d列的和为：%d \n", j + 1, sum);
    }
    // 左上到右下对角线
    int sum = 0;
    for (int i = 0; i != n; ++i) {
        sum += arr[i][i];
    }
    printf("左上到右下对角线的和为：%d \n", sum);
    // 右上到左下对角线
    sum = 0;
    for (int i = 0; i != n; ++i) {
        sum += arr[i][n - i - 1];
    }
    printf("右上到左下对角线的和为：%d \n", sum);
    return 0;
}
