#include <vector>
#include <iostream>
#include <algorithm>
#include "MyStack.hpp"
using namespace std;

void reverseVector(vector<int>& input){
  reverse(input.begin(), input.end());
}

void reverseVector2(vector<int>& input){
  for(size_t i = 0; i<input.size()/2; i++){
    swap(input[i], input[input.size() - 1 -i]);
  }
}

void reverseVector3(vector<int>& input){
  MyStack<int> stack;
  for(auto i : input){
    stack.push(i);
  }
  input.clear();
  while(!stack.isEmpty())
    input.push_back(stack.pop());
}