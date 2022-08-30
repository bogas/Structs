#include <iostream>

template<class T>
class F{
public:
template<class B>
void forward(B&&){std::cout<<"Dupa"<<std::endl;}
};

int main() {
    int i = 41;
    F<int> f;
    const int ci = 42;
    f.forward(i);   // OK, lvalue, T=int&
    f.forward(ci);  // OK, lvalue, T=const int&
    f.forward(43);  // OK, rvalue, T=int
}