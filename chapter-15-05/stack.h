#ifndef YH_STACK_H
#define YH_STACK_H

#include <stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow();
void stack_underflow();
void push(int i);
int pop(void);
void print_stack();

#endif