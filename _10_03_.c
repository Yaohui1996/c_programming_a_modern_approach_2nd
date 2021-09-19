// 把数组num_in_rank、num_in_suit和card_exists从10.5节的poker.c程序中去掉。
// 程序改用5×2的数组来存储牌。数组的每一行表示一张牌。
// 例如，如果数组名为hand，则hand[0][0]存储第一张牌的等级，hand[0][1]存储第一张牌的花色。

/* Classifies a poker hand */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#define RANK 0
#define SUIT 1
#define NUM_CARDS 5
/* external variables */
int hand[NUM_CARDS][2];
int pairs; /* can be 0, 1, or 2 */
bool four;
bool three;
bool straight;
bool flush;
/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
/************************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 * repeatedly. *
 ************************************************************/
int main(void) {
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}
/************************************************************
 * read_cards: Reads the cards into the external *
 * variables num_in_rank and num_in_suit; *
 * checks for bad cards and duplicate cards. *
 ***********************************************************/
void read_cards(void) {
    // bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    while (cards_read < NUM_CARDS) {
        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch) {
            case '0':
                exit(EXIT_SUCCESS);
            case '2':
                rank = 0;
                break;
            case '3':
                rank = 1;
                break;
            case '4':
                rank = 2;
                break;
            case '5':
                rank = 3;
                break;
            case '6':
                rank = 4;
                break;
            case '7':
                rank = 5;
                break;
            case '8':
                rank = 6;
                break;
            case '9':
                rank = 7;
                break;
            case 't':
            case 'T':
                rank = 8;
                break;
            case 'j':
            case 'J':
                rank = 9;
                break;
            case 'q':
            case 'Q':
                rank = 10;
                break;
            case 'k':
            case 'K':
                rank = 11;
                break;
            case 'a':
            case 'A':
                rank = 12;
                break;
            default:
                bad_card = true;
        }
        suit_ch = getchar();
        switch (suit_ch) {
            case 'c':
            case 'C':
                suit = 0;
                break;
            case 'd':
            case 'D':
                suit = 1;
                break;
            case 'h':
            case 'H':
                suit = 2;
                break;
            case 's':
            case 'S':
                suit = 3;
                break;
            default:
                bad_card = true;
        }
        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;
        if (bad_card) printf("Bad card; ignored.\n");

        bool card_exist = false;
        for (int i = 0; i != cards_read; ++i) {
            if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
                printf("Duplicate card; ignored.\n");
                card_exist = true;
                break;
            }
        }
        if (!card_exist) {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            ++cards_read;
        }
    }
}
/************************************************************
 * analyze_hand: Determines whether the hand contains a *
 * straight, a flush, four-of-a-kind, *
 * and/or three-of-a-kind; determines the *
 * number of pairs; stores the results into *
 * the external variables straight, flush, *
 * four, three, and pairs. *
 ************************************************************/
void analyze_hand(void) {
    // 先根据rank排序
    for (int i = 0; i != NUM_CARDS - 1; ++i) {
        // 找到最小的index
        int min_i = i;
        for (int j = i + 1; j != NUM_CARDS; ++j) {
            if (hand[j][RANK] < hand[min_i][RANK]) {
                min_i = j;
            }
        }
        // 交换
        int temp_rank = hand[i][RANK];
        int temp_suit = hand[i][SUIT];
        hand[i][RANK] = hand[min_i][RANK];
        hand[i][SUIT] = hand[min_i][SUIT];
        hand[min_i][RANK] = temp_rank;
        hand[min_i][SUIT] = temp_suit;
    }

    /* check for flush */
    // 同花色
    bool flush = true;
    int suit = hand[0][SUIT];
    for (int i = 1; i != NUM_CARDS; ++i) {
        if (hand[i][SUIT] != suit) {
            flush = false;
            break;
        }
    }

    /* check for straight */
    // 顺子
    straight = true;
    for (int i = 0; i != NUM_CARDS - 1; ++i) {
        if (hand[i][RANK] + 1 != hand[i + 1][RANK]) {
            straight = false;
            break;
        }
    }
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    four = false;
    three = false;
    pairs = 0;
    int card = 0;
    while (card < NUM_CARDS) {
        int rank = hand[card][RANK];
        int run = 0;
        do {
            ++run;
            ++card;
        } while (card < NUM_CARDS && hand[card][RANK] == rank);
        switch (run) {
            case 2:
                ++pairs;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
        }
    }
}
/************************************************************
 * print_result: prints the classification of the hand, *
 * based on the values of the external *
 * variables straight, flush, four, three, *
 * and pairs. *
 ***********************************************************/
void print_result(void) {
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");
    printf("\n\n");
}
