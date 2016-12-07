#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyStack.h"

int main() {
  const int STACK_SIZE = 5;
  srand((unsigned) time(NULL));

  Stack *stack = new_stack(STACK_SIZE);

  printf("Push values on stack:\n");
  while(!stack->isFull()) {
    int num = rand() % 100;
    printf("%d\n", num);
    stack->push(num);
  }

  printf("\nPop values from stack:\n");
  while(!stack->isEmpty())
    printf("%d\n", stack->pop());

  del_stack(stack);

  return 0;
}
