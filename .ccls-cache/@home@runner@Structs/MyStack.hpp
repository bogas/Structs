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

MyStack<int> reverseStack(MyStack<int> stack){
  if(stack.isEmpty())
    return MyStack<int>{};
}