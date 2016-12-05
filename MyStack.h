#ifndef STACKCLASS_H
#define STACKCLASS_H
#include <stdio.h>
#define TRUE 1
#define FALSE 2

typedef struct Stack {
    struct c_priv * priv;
    int (*push)(int);
    int (*pop)();
    int (*isEmpty)();
    int (*isFull)();
} Stack;

Stack* new_stack(int size);

#endif
