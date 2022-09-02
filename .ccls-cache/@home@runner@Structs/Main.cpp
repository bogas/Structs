#include "MyStack.hpp"
using namespace std;


int main(){
  MyStack<int> stack;
  stack.push(10);
  stack.push(200);
  stack.push(300);
  stack.printMe();
  reverseStack(stack).printMe();
  return 0;
}