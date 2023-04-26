#include<iostream>
using namespace std;

char* createStack(int N) {
 char* p = new char(N);
 return p;
}

void printStack(char* stack, int top) {
 cout << "Stack: ";
 for (int i = 0; i <= top; i++) {
  cout << stack[i] << " ";
 }
 cout << endl;
}

void Push(char* stack, int* top, int max_stack, char item) {
 if (*top == max_stack) {
  cout << "Error! Overflow" << endl;
  return;
 }
 *top += 1;
 stack[*top] = item;
 return;
}

char Pop(char* stack, int* top) {
 if (*top == -1) {
  cout << "Error! Underflow" << endl;
  return NULL;
 }
 char item = stack[*top];
 *top -= 1;
 return item;
}

int main()
{
 char* stack1 = createStack(5);
 int top = -1;
 Push(stack1, &top, 4, 'a');
 Push(stack1, &top, 4, 'b');
 Push(stack1, &top, 4, 'c');
 printStack(stack1, top);
 cout << Pop(stack1, &top) << endl;
 cout << Pop(stack1, &top) << endl;
 printStack(stack1, top);

 return 0;
}
