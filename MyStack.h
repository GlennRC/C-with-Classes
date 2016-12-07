#ifndef STACK_H
#define STACK_H
#define new new_stack
#define delete del_stack
#include "Class.h"

class Stack {
  //Public
  int (*push)(int);
  int (*pop)();
  int (*isEmpty)();
  int (*isFull)();

  struct c_priv * priv;
} Stack;

Stack* new(int size);
void delete();

#endif
