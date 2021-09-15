// 编写一个程序，要求用户输入一个两位数，然后显示该数的英文单词：
// 提示：把数分解为两个数字。
// 用一个switch语句显示第一位数字对应的单词（“twenty”、“thirty”等），
// 用第二个switch语句显示第二位数字对应的单词。
// 不要忘记11～19需要特殊处理。

#include <stdio.h>

int main() {
    unsigned int input;
    printf("Enter the two-digit number: ");
    scanf("%u", &input);
    unsigned int a = input / 10;
    unsigned int b = input % 10;
    switch (a) {
        case 1:
            switch (b) {
                case 0:
                    printf("You entered the number ten.\n");
                    break;
                case 1:
                    printf("You entered the number eleven.\n");
                    break;
                case 2:
                    printf("You entered the number twelve.\n");
                    break;
                case 3:
                    printf("You entered the number thirteen.\n");
                    break;
                case 4:
                    printf("You entered the number fourteen.\n");
                    break;
                case 5:
                    printf("You entered the number fifteen.\n");
                    break;
                case 6:
                    printf("You entered the number sixteen.\n");
                    break;
                case 7:
                    printf("You entered the number seventeen.\n");
                    break;
                case 8:
                    printf("You entered the number eighteen.\n");
                    break;
                case 9:
                    printf("You entered the number nineteen.\n");
                    break;
            }
            break;
        case 2:
            printf("You entered the number twenty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 3:
            printf("You entered the number thirty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 4:
            printf("You entered the number forty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 5:
            printf("You entered the number fifty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 6:
            printf("You entered the number sixty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 7:
            printf("You entered the number seventy");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 8:
            printf("You entered the number eighty");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
        case 9:
            printf("You entered the number ninety");
            switch (b) {
                case 0:
                    printf(".\n");
                    break;
                case 1:
                    printf("-one.\n");
                    break;
                case 2:
                    printf("-two.\n");
                    break;
                case 3:
                    printf("-three.\n");
                    break;
                case 4:
                    printf("-four.\n");
                    break;
                case 5:
                    printf("-five.\n");
                    break;
                case 6:
                    printf("-six.\n");
                    break;
                case 7:
                    printf("-seven.\n");
                    break;
                case 8:
                    printf("-eight.\n");
                    break;
                case 9:
                    printf("-nine.\n");
                    break;
            }
            break;
    }
    return 0;
}
