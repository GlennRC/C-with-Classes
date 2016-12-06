#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MyStack.cpp"

using namespace std;
int main() {
  srand(time(NULL));

  int size = 5;
  Stack stack = Stack(5);

  cout << "Push random values to stack:";
  for(int i=0; i<size; i++) {
    int num = rand()%100+1;
  if(stack.push(num))
      cout << endl << num;
  else
      cout << "\n Stack1 is full: ";
  }

  cout << "\n\nPop values from stack: \n";
  for(int i=0; i<size; i++)
    cout << stack.pop() << endl;

  return 0;
}
