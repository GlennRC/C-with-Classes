#include "MyStack.h"
#include <stdio.h>

static Stack *this;
//The private portion of the class
struct c_priv {
    int size;
    int *values;
    int index;
};

static int isEmpty() {
  if (this->priv->index == -1) {
    return TRUE;
  }
  else
    return FALSE;
}

static int isFull() {
  if (this->priv->index+1 == this->priv->size) {
    return TRUE;
  }
  else
    return FALSE;
}

static int push(int val) {
  int b = 0;
  if(isFull() == FALSE) {
    this->priv->index += 1;
    this->priv->values[this->priv->index] = val;
    b = 1;
  }
  return b;
}

static int pop() {
  int val = -1;
  if(isEmpty() == FALSE) {
    val = this->priv->values[this->priv->index];
    this->priv->index -=  1;
  }
  return val;
}

Stack * new_stack(int size) {
    this = malloc(sizeof(Stack));
    this->priv = malloc(sizeof(struct c_priv));
    this->priv->size = size;
    this->priv->index = -1;
    this->priv->values = malloc(sizeof(int)*size);

    this->push = push;
    this->pop = pop;
    this->isEmpty = isEmpty;
    this->isFull = isFull;

    return this;
}

void del_stack(Stack* s) {
  free(s->priv);
  free(s);
}
