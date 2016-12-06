#include <cstdlib>
#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int size);
    ~Stack() {
      delete [] values;
    }
    bool push(int val);
    int pop();
    bool isEmpty();
    bool isFull();

  private:
    int size;
    int *values;
    int index;
};

Stack::Stack(int size): //const members
    size(size),
    values(new int[size]),
    index(-1) {}

bool Stack::push(int val) {
    bool b = 0;
    if(!Stack::isFull()) {
      index += 1;
      values[index] = val;
      b = 1;
    }
    return b;
}

int Stack::pop() {
    int val = -1;
    if(!Stack::isEmpty()) {
      val = values[index];
      index -=  1;
    }
    else
      cerr << "Stack is Empty : ";

    return val;
}

bool Stack::isFull() {
    if((index + 1) == size)
      return 1;
    else
      return 0;
}

bool Stack::isEmpty() {
    if( index  == -1 )//is empty
      return 1;
    else
      return 0; //is not empty
}
