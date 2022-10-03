#include "stack.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10
/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void stack_overflow() {
    printf("Expression is too complex!\n");
    exit(-1);
}
void stack_underflow() {
    printf("Notenough operands in expression!\n");
    exit(-1);
}
void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void) {
    if (!is_empty()) {
        return contents[--top];
    }
    stack_underflow();
    return -1;
}
void print_stack() {
    for (int i = 0; i != STACK_SIZE; ++i) {
        printf("[index=%d] [value=%d]\n", i, contents[i]);
    }
}