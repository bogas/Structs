#include <vector>
#include <iostream>
#include <utility>
using namespace std;

template <class T>
class MyStack{
    public:
        void push(T&& element){
            data.push_back(std::forward<T>(element));
        }
        T pop(){
            auto result = data.back();
            data.erase(data.end()-1);
            return result;
        }
    private:
        vector<T> data;

};

int main(){
    MyStack<int> stack;
    int a = 5;
    stack.push(a);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout<<stack.pop()<<" "<<stack.pop()<<" "<<stack.pop()<<endl;
    return 0;
}