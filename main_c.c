#include "MyStack.h"
#include "TypicalStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_SIZE 10
int main() {
    srand((unsigned) time(NULL));
    Stack *s = new_stack(STACK_SIZE);

    for(int i=0; i<STACK_SIZE; i++) {
      int num = rand() % 100;
      printf("push: %d\n", s->push(num));
    }

    printf("pop: %d\n", s->pop());

    del_stack(s);

    return 0;
}
