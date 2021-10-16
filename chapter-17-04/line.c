#include "line.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 60

struct node {
    char val[21];
    struct node* next;
};

struct node* first = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void) {
    // 释放链表
    if (first == NULL) return;
    // 遍历链表
    struct node* p;
    struct node* q = first;
    for (p = first->next; p->next != NULL; p = p->next) {
        free(q);
        q = p;
    }
    free(q);
    first = NULL;

    line_len = 0;
    num_words = 0;
}
void add_word(const char* word) {
    // 创建新节点
    struct node* new_word;
    new_word = (struct node*)malloc(sizeof(struct node));
    // 修改val和next的值
    strncpy(new_word->val, word, sizeof(new_word->val) - 1);
    new_word->val[sizeof(new_word->val) - 1] = '\0';
    new_word->next = NULL;

    // 插入新节点
    if (first == NULL) {
        first = new_word;

    } else {
        struct node* p;
        // 首先找到链表的尾部
        for (p = first; p->next != NULL; p = p->next) {
            ;
        }
        // 末尾节点指向新节点
        p->next = new_word;
    }
    line_len += strlen(word);
    num_words++;
}
int space_remaining(void) { return MAX_LINE_LEN - line_len; }
void write_line(void) {
    struct node* p;
    for (p = first; p != NULL && p->next != NULL; p = p->next) {
        printf("%s ", p->val);
    }
    printf("\n");
}
void flush_line(void) {
    if (first != NULL) {
        struct node* p;
        // 遍历链表
        for (p = first; p->next != NULL; p = p->next) {
            printf("%s ", p->val);
        }
        printf("\n");
    }
}