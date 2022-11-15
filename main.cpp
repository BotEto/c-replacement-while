#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  vector<int> some_numbers;

    for (; x ; x/=10)
        some_numbers.push_back(x%10);
  /*
    while ( x > 0){
      some_numbers.push_back(x%10);   
      x%10;
    } */
    
    for (int i = 0; i + i < some_numbers.size(); ++i)
        if (some_numbers[i] != some_numbers[some_numbers.size() - i - 1])
            return false;
    return true;
};
