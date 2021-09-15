// 图书用国际标准书号（ISBN）进行标识。
// 2007年1月1日之后分配的ISBN包含13位数字（旧的ISBN使用10位数字），
// 分为5组，如978-0-393-97950-3。
// 第一组（GS1前缀）目前为978或979。
// 第二组（组标识）指明语言或者原出版国（如0和1用于讲英语的国家）。
// 第三组（出版商编号）表示出版商（393是W. W. Norton出版社的编号）。
// 第四组（产品编号）是由出版商分配的用于识别具体哪一本书的（97950）。
// ISBN的末尾是一个校验数字，用于验证前面数字的准确性。
// 编写一个程序来分解用户录入的ISBN信息：

// 注意：每组中数字的个数是可变的，不能认为每组的长度都与示例一样。
// 用实际的ISBN值（通常放在书的封底和版权页上）测试你编写的程序。

#include <stdio.h>

int main() {
    unsigned int GS1_p;
    unsigned int g_i;
    unsigned int p_c;
    unsigned int i_n;
    unsigned int c_d;
    printf("Enter ISBN: ");
    scanf("%u-%u-%u-%u-%u", &GS1_p, &g_i, &p_c, &i_n, &c_d);
    printf("GS1 prefix: %u\n", GS1_p);
    printf("Group identifier: %u\n", g_i);
    printf("Publisher code: %u\n", p_c);
    printf("Item number: %u\n", i_n);
    printf("Check digit: %u\n", c_d);
    return 0;
}
