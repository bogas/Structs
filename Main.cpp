#include "MyStack.hpp"
#include "MyArray.hpp"
#include "Problems.hpp"

using namespace std;
auto printContainer = [](auto container){
  for_each(container.begin(),container.end(),[](auto elem){
    cout<<elem<<" ";
  });
  cout<<endl;
};

int main(){
  printContainer(findPairThatSums({1,2,3,4,5}, 8));
  return 0;
}