#pragma once
#include <vector>
#include <iostream>
#include <utility>
using namespace std;

template <typename T>
class MyStack{
    public:
        template <typename K>
        void push(K&& element){
            data.push_back(forward<T>(element));
        }
        int pop(){
            auto result = data.back();
            data.erase(data.end()-1);
            return result;
        }
        bool isEmpty(){
          return data.empty();
        }
        void printMe(){
          for(const auto& d : data){
            cout<<d<<" ";
          }
          cout<<endl;
        }
    private:
        vector<T> data;

};

void insertAtBottom(int elem, MyStack<int>& stack){
  if(stack.isEmpty()){
    stack.push(elem);
    return;
    }
  auto tempElem = stack.pop();
  insertAtBottom(elem, stack);
  stack.push(tempElem);
}


void reverseStack(MyStack<int>& stack){
  if(stack.isEmpty())
    return stack;
  auto lastElem = stack.pop();
  reverseStack(stack);
  insertAtBottom(lastElem, stack);
}

void reverseStack2(MyStack<int>& stack){
  MyStack<int> tempStack;
  while(!stack.isEmpty()){
    insertAtBottom(stack.pop(), tempStack);
  }
  while(!tempStack.isEmpty()){
    stack.push(tempStack.pop());
  }
  }

  
vector<int> findNextGreater(const vector<int>& input){
  for(auto& i : input)
    cout<<i<<" ";
  cout<<endl;
  vector<int> result(input.size());
  for(size_t i = 0; i < input.size()-1; i++){
    for(size_t j = i+1; j < input.size(); j++){
      if(input.at(j) > input.at(i)){
        result.at(i) = input.at(j);
        break;
        }
      }
    }
  cout<<"XXX "<<result.size()<<endl;
  for(const auto& i : result)
    cout<<i<<" ";
  cout<<endl;
  return result;
  }

void revertString(string& s){
  MyStack<char> stack;
  for(auto c : s){
    stack.push(c);
    }
  s.clear();
  while(!stack.isEmpty()){
    s.push_back(stack.pop());
  }
}