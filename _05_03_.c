// 修改5 .2节的broker.c程序，同时进行下面两种改变。
// (a)不再直接输入交易额，而是要求用户输入股票的数量和每股的价格。
// (b)增加语句用来计算经纪人竞争对手的佣金（少于2000股时佣金为每股33美元+
// 3美分，2000股或更多股时佣金为每股33美元 + 2美分）。
// 在显示原有经纪人佣金的同时，也显示出竞争对手的佣金。

#include <stdio.h>

int main() {
    unsigned int number_of_stock;
    float commission, value, value_of_one_stock, commission_compt;
    printf("Enter value_of_one_stock: ");
    scanf("%f", &value_of_one_stock);
    printf("Enter number_of_stock: ");
    scanf("%u", &number_of_stock);

    value = value_of_one_stock * (float)number_of_stock;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    if (commission < 39.00f) commission = 39.00f;

    // 计算竞争对手佣金
    if (number_of_stock < 2000)
        commission_compt = (float)number_of_stock * 0.03f + 33.0f;
    else
        commission_compt = (float)number_of_stock * 0.02f + 33.0f;
    printf("Commission: $%.2f\n", commission);
    printf("Commission of comp: $%.2f\n", commission_compt);
    return 0;
}
