// It sorts the given vector in the specified range but the sorted part is the [first, middle). 

#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v = {5,7,4,2,8,6,1,9,0,3};

  // Syntax: partial_sort(starting index, middle index, ending index);
  // The algorithm considers the complete vector but the sorted part is only the [first, middle).
  std::partial_sort(v.begin(), v.begin()+4, v.end());

  cout << "Vector partially sorted upto 4th index in ascending order:\n";
  for(int num : v)
    cout << num << " ";  
  cout << endl;

  // O/P - 0 1 2 3 8 7 6 9 5 4
  // In the O/P, first 4 indices taken from start to end of vector, are sorted and the rest are in random order.
  std::partial_sort(v.begin(), v.begin()+4, v.end(), greater<int>());  // sorting in reverse order
  cout << "Vector partially sorted upto 4th index in descending order:\n";
  for(int num : v)
    cout << num << " ";  
  cout << endl;

  return 0;
}