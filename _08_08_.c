// 修改编程题7，使其提示用户输入每个学生5门测验的成绩，一共有5个学生。
// 然后计算每个学生的总分和平均分，以及每门测验的平均分、高分和低分。

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
    // 初始化
    int int_array[M][N] = {0};
    for (size_t i = 0; i != M; ++i) {
        printf("请输入学生%zu的成绩: ", i + 1);
        scanf("%d %d %d %d %d", &int_array[i][0], &int_array[i][1],
              &int_array[i][2], &int_array[i][3], &int_array[i][4]);
    }

    // 保存结果的数据结构
    int students_grades[M] = {0};
    double average_students_grades[M] = {0};
    int project_max_grades[N] = {0};
    int projcet_min_grades[N] = {0};
    double average_project_grades[N] = {0};

    // 计算每个学生各科的总分和平均分
    for (size_t i = 0; i != M; ++i) {
        int sum = 0;
        for (size_t j = 0; j != N; ++j) {
            sum += int_array[i][j];
        }
        students_grades[i] = sum;
        average_students_grades[i] = (double)sum / (double)N;
    }

    // 计算每门测验的平均分，最高分，最低分
    for (size_t j = 0; j != N; ++j) {
        int sum = 0;
        int max_value = int_array[0][j];
        int min_value = int_array[0][j];
        for (size_t i = 0; i != M; ++i) {
            sum += int_array[i][j];
            if (int_array[i][j] > max_value) max_value = int_array[i][j];
            if (int_array[i][j] < min_value) min_value = int_array[i][j];
        }
        average_project_grades[j] = (double)sum / (double)M;
        projcet_min_grades[j] = min_value;
        project_max_grades[j] = max_value;
    }

    // 输出
    printf("每个学生的总分: ");
    for (size_t i = 0; i != M; ++i) printf("%d ", students_grades[i]);
    printf("\n");

    printf("每个学生的平均分: ");
    for (size_t i = 0; i != M; ++i) printf("%.2f ", average_students_grades[i]);
    printf("\n");

    printf("每门测验的平均分: ");
    for (size_t i = 0; i != M; ++i) printf("%.2f ", average_project_grades[i]);
    printf("\n");

    printf("每门测验的最高分: ");
    for (size_t i = 0; i != M; ++i) printf("%d ", project_max_grades[i]);
    printf("\n");

    printf("每门测验的最低分: ");
    for (size_t i = 0; i != M; ++i) printf("%d ", projcet_min_grades[i]);
    printf("\n");

    return 0;
}
