// 编写函数模拟掷骰子的游戏（两个骰子）。
// 第一次掷的时候，如果点数之和为7或11则获胜；
// 如果点数之和为2、3或12则落败；
// 其他情况下的点数之和称为“目标”，游戏继续。
// 在后续的投掷中，如果玩家再次掷出“目标”点数则获胜，掷出7则落败，其他情况都忽略，游戏继续进行。
// 每局游戏结束时，程序询问用户是否再玩一次，如果用户输入的回答不是y或Y，程序会显示胜败的次数然后终止。

// You rolled: 8
// Your point is 8
// You rolled: 3
// You rolled: 10
// You rolled: 8
// You win!
// Play again? y
// You rolled: 6
// Your point is 6
// You rolled: 5
// You rolled: 12
// You rolled: 3
// You rolled: 7
// You lose!
// Play again? y
// You rolled: 11
// You win!
// Play again? n
// Wins: 2 Losses: 1

// 编写三个函数：main、roll_dice和play_game。下面给出了后两个函数的原型：
// int roll_dice(void);
// bool play_game(void);
// roll_dice应生成两个随机数（每个都在1和6之间），并返回它们的和。
// play_game应进行一次掷骰子游戏（调用roll_dice确定每次掷的点数），
// 如果玩家获胜则返回true，如果玩家落败则返回false。
// play_game函数还要显示玩家每次掷骰子的结果。
// main函数反复调用play_game函数，记录获胜和落败的次数，
// 并显示“you win”和“you lose”消息。
// 提示：使用rand函数生成随机数。
// 关于如何调用rand和相关的srand函数，见8.2节deal.c程序中的例子。

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main() {
    char ch;
    int win_nums = 0;
    int lose_nums = 0;
    if (play_game()) {
        ++win_nums;
        printf("You win!\n");
        printf("Play again?\n");
        ch = getchar();
        getchar();
    } else {
        ++lose_nums;
        printf("You lose!\n");
        printf("Play again?\n");
        ch = getchar();
        getchar();
    }
    while (ch != 'n') {
        if (play_game()) {
            ++win_nums;
            printf("You win!\n");
            printf("Play again?\n");
            ch = getchar();
            getchar();
        } else {
            ++lose_nums;
            printf("You lose!\n");
            printf("Play again?\n");
            ch = getchar();
            getchar();
        }
    }
    printf("Wins: %d Losses: %d\n", win_nums, lose_nums);
    return 0;
}

int roll_dice(void) {
    int num_1;
    int num_2;
    int sum;
    srand((unsigned)clock());
    // srand((unsigned)time(NULL));
    num_1 = rand() % 6 + 1;
    srand((unsigned)clock());
    num_2 = rand() % 6 + 1;
    sum = num_1 + num_2;
    printf("You rolled: %d\n", sum);
    return sum;
}
bool play_game(void) {
    // 第一次
    int target;
    int sum = roll_dice();
    if (sum == 7 || sum == 11) {
        return true;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        return false;
    } else {
        target = sum;
    }
    //之后
    sum = roll_dice();

    while (sum != target) {
        if (sum == 7) {
            return false;
        } else {
            sum = roll_dice();
        }
    }
    return true;
}
