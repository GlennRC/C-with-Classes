#include "MyStack.h"

int main() {

    Stack *s = new_stack(10);
    printf("push: %d\n", s->push(5));
    printf("pop: %d\n", s->pop());

    return 0;
}