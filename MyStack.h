#ifndef STACK_H
#define STACK_H

typedef struct Stack {
  //Public
  int (*push)(int);
  int (*pop)();
  int (*isEmpty)();
  int (*isFull)();

  struct c_priv * priv;
} Stack;

Stack* new_stack(int size);
void del_stack();

#endif
