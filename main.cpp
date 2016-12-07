#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MyStack.cpp"

using namespace std;
int main() {
  const int STACK_SIZE = 5;
  srand(time(NULL));

  Stack stack = Stack(STACK_SIZE);

  cout << "Push values on stack:\n";
  while(!stack.isFull()) {
    int num = rand() % 100;
    cout << num << endl;
    stack.push(num);
  }

  cout << "\nPop values from stack:\n";
  while(!stack.isEmpty())
    cout << stack.pop() << endl;


  return 0;
}
