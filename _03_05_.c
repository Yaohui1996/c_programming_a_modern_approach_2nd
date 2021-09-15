// 编写一个程序，要求用户（按任意次序）输入从1到16的所有整数
// 然后用4×4矩阵的形式将它们显示出来
// 再计算出每行、每列和每条对角线上的和：
// 如果行、列和对角线上的和都一样（如本例所示），则称这些数组成一个幻方（magicsquare）。
// 这里给出的幻方出现于艺术家和数学家Albrecht Dürer在1514年的一幅画中。
// （注意，矩阵的最后一行中间的两个数给出了该画的创作年代。）

#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e,
          &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    printf("%d\t%d\t%d\t%d\n", e, f, g, h);
    printf("%d\t%d\t%d\t%d\n", i, j, k, l);
    printf("%d\t%d\t%d\t%d\n", m, n, o, p);
    printf("Row sums: %d %d %d %d\n", a + b + c + d, e + f + g + h,
           i + j + k + l, m + n + o + p);
    printf("Column sums: %d %d %d %d\n", a + e + i + m, b + f + j + n,
           c + g + k + o, d + h + l + p);
    printf("Diagonal sums: %d %d\n", a + f + k + p, d + g + j + m);
    return 0;
}
