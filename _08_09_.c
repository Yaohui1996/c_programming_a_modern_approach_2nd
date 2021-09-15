// 编写程序，生成一种贯穿10×10字符数组（初始时全为字符'.'）的“随机步法”。
// 程序必须随机地从一个元素 “走到”另一个元素，
// 每次都向上、向下、向左或向右移动一个元素位置。
// 已访问过的元素按访问顺序用字母A到Z进行标记。
// 下面是一个输出示例：

// 提示：利用srand函数和rand函数（见程序deal.c）产生随机数，然后查看此数除以4的余数。
// 余数一共有4种可能的值（0、1、2和3），指示下一次移动的4种可能方向。
// 在执行移动之前，需要检查两项内容：
// 一是不能走到数组外面，二是不能走到已有字母标记的位置。
// 只要有一个条件不满足，就得尝试换一个方向移动。
// 如果4个方向都堵住了，程序就必须终止了。
// 下面是提前结束的一个示例：

// 因为Y的4个方向都堵住了，所以没有地方可以放置下一步的Z了。

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define M 10
#define N 10

int main() {
    // 初始化矩阵
    char matrix[M][N];
    for (size_t i = 0; i != M; ++i) {
        for (size_t j = 0; j != N; ++j) {
            matrix[i][j] = '.';
        }
    }

    // 存储当前位置
    size_t pos_x = 0;
    size_t pos_y = 0;

    // 存储可行方向;
    _Bool left = false;
    _Bool down = true;
    _Bool right = true;
    _Bool up = false;

    // 开始漫步
    char ch = 'A';
    matrix[0][0] = ch;

    int random_int;
    while (left == true || up == true || right == true || down == true) {
        if (!(ch < 'Z')) break;
        // 生成满足可行方向的随机数
        // srand((unsigned)time(NULL));
        srand((unsigned)clock());
        random_int = rand() % 4;
        while (true) {
            if (left == true && random_int == 0) break;
            if (down == true && random_int == 1) break;
            if (right == true && random_int == 2) break;
            if (up == true && random_int == 3) break;
            // srand((unsigned)time(NULL));
            srand((unsigned)clock());
            random_int = rand() % 4;
        }

        // 更新位置
        if (random_int == 0)
            pos_x -= 1;
        else if (random_int == 1)
            pos_y += 1;
        else if (random_int == 2)
            pos_x += 1;
        else if (random_int == 3)
            pos_y -= 1;

        matrix[pos_x][pos_y] = ch + 1;

        // 更新可行方向
        if (pos_x > 0 && matrix[pos_x - 1][pos_y] == '.') {
            left = true;
        } else {
            left = false;
        }
        if (pos_y < M - 1 && matrix[pos_x][pos_y + 1] == '.') {
            down = true;
        } else {
            down = false;
        }
        if (pos_x < N - 1 && matrix[pos_x + 1][pos_y] == '.') {
            right = true;
        } else {
            right = false;
        }
        if (pos_y > 0 && matrix[pos_x][pos_y - 1] == '.') {
            up = true;
        } else {
            up = false;
        }

        // 更新下一次的字符
        ++ch;

        // 可视化
        printf("----------最新一次的漫步结果----------\n");
        for (size_t i = 0; i != M; ++i) {
            for (size_t j = 0; j != N; ++j) {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
