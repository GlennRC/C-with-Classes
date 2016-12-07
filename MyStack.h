#ifndef STACK_H
#define STACK_H
#define TRUE 1
#define FALSE 0

#define class typedef struct
class Stack {
  int (*push)(int);
  int (*pop)();
  int (*isEmpty)();
  int (*isFull)();

  struct c_priv * priv;

} Stack;

Stack* new_stack(int size);
void del_stack(Stack* s);

#endif
