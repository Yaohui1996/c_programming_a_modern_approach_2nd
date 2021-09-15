// 编写一个程序，对用户录入的产品信息进行格式化。
// 其中，产品编号和日期项采用左对齐方式
// 单位价格采用右对齐方式，允许最大取值为9999.99的美元。
// 提示：各个列使用制表符控制。
#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter item number: ");
    scanf("%u", &number);
    float price;
    printf("Enter unit price: ");
    scanf("%f", &price);
    unsigned int month;
    unsigned int day;
    unsigned int year;
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%u/%u/%u", &month, &day, &year);
    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%-u\t$%7.2f\t%-u/%-u/%-u\n", number, price, month, day, year);
    return 0;
}
