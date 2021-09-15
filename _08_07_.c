// 编写程序读取一个5×5的整数数组，然后显示出每行的和与每列的和。
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totals: 30 27 40 36 28
// Column totals: 34 37 37 32 21

#include <stdio.h>

#define M 5
#define N 5

int main() {
    int int_array[M][N] = {0};
    for (size_t i = 0; i != M; ++i) {
        printf("Enter row %zu: ", i + 1);
        scanf("%d %d %d %d %d", &int_array[i][0], &int_array[i][1],
              &int_array[i][2], &int_array[i][3], &int_array[i][4]);
    }

    printf("Row totals: ");
    for (size_t i = 0; i != M; ++i) {
        int sum = 0;
        for (size_t j = 0; j != N; ++j) {
            sum += int_array[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    printf("Column totals: ");
    for (size_t j = 0; j != N; ++j) {
        int sum = 0;
        for (size_t i = 0; i != M; ++i) {
            sum += int_array[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}
