// 欧洲国家不使用北美的12位通用产品代码（UPC），
// 而使用13位的欧洲商品编码（European Article Number, EAN）。
// 跟UPC一样，每个EAN码的最后也有一个校验位。
// 计算校验位的方法也类似：首先把第2位、第4位、第6位、第8位、第10位和第12位数字相加；
// 然后把第1位、第3位、第5位、第7位、第9位和第11位数字相加；
// 接着把第一次加法的结果乘以3，再和第二次加法的结果相加；
// 随后，再把上述结果减去1；
// 相减后的结果除以10取余数；
// 最后用9减去上一步骤中得到的余数。

// 以Güllüoglu Turkish Delight Pistachio & Coconut为例，其EAN码为8691484260008。
// 第一个和为6 + 1 + 8 + 2 + 0 + 0 = 17，
// 第二个和为8 + 9 + 4 + 4 + 6 + 0 = 31。
// 第一个和乘以3再加上第二个和得到82，减1得到81。
// 这个结果除以10的余数是1，再用9减去余数得到8，与原始编码的最后一位一致。
// 请修改4.1节的upc.c程序以计算EAN的校验位。用户把EAN的前12位当作一个数输入：

#include <stdio.h>
int main() {
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum,
        last;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i0, &i1, &i2, &i3, &i4, &i5,
          &i6, &i7, &i8, &i9, &i10, &i11);
    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i0 + i2 + i4 + i6 + i8 + i10;
    last = 9 - (3 * first_sum + second_sum - 1) % 10;
    printf("Check digit: %d\n", last);
    return 0;
}
