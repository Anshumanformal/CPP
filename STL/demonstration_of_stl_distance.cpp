// std::distance in c++ stl.


// Time Complexity: Constant for random-access iterators and O(n) for all other iterators.


#include<bits/stdc++.h>
using namespace std;

int main(){

  vector <int> v;
  int i;

  // Insert some numbers.
  for(int i=0;i<10;i++){
    v.push_back(i);
  }

  // Creating iterators for the above vector.
  vector<int>::iterator first;
  vector<int>::iterator last;

  // First pointing to 0.
  first = v.begin();
  last = v.begin()+5;

  // Calculating number of elements between first and last.
  int num1 = std::distance(first,last);
  int num2 = std::distance(last, first);
  cout << "Distance in forward direction: " << num1 << endl;
  cout << "Distance in backward direction: " << num2 << endl;

  return 0;
}