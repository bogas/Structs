#pragma once
#include <vector>
#include <iostream>
#include <utility>
#inlcude <pair>
using namespace std;

pair<int,int> findPairThatSums(vector<int>& numbers, int sum){
  for(size_t i = 0; i< numbers.size(); i++){
    for(size_t j = 0; j< numbers.size(); j++){
      if(i!=j and (numbers[i] + numbers[j]) == sum)
        return make_pair(numbers[i], numbers[j]);
  }
    return {};
}
