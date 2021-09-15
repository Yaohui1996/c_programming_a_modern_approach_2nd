// 利用switch语句编写一个程序，把用数字表示的成绩转化为字母表示的等级。
// 使用下面的等级评定规则：
// A为90～100，
// B为80～89，
// C为70～79，
// D为60～69，
// F为0～59。
// 如果成绩高于100或低于0显示出错消息。
// 提示：把成绩拆分成2个数字，然后使用switch语句判定十位上的数字。

#include <stdio.h>

int main() {
    int grade, shi;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if (grade < 0 || grade > 100) {
        printf("错误！！！，成绩不可低于0分或高于100分！！！");
    }
    shi = grade / 10;
    switch (shi) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Letter grade: F\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 9:
        case 10:
            printf("Letter grade: A\n");
            break;
        default:
            break;
    }
    return 0;
}
