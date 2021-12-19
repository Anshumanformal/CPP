// Algorithm library implementation in C++.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
  
  vector <int> v;
  v.push_back(3);
  v.push_back(1);
  v.push_back(20);
  v.push_back(45);
  v.push_back(6);

  cout << "Using STL binary search to find element : " << binary_search(v.begin(), v.end(), 20) << endl;

  //  Lower bound
  cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

  //  Upper bound
  cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

  int a = 3;
  int b = 5;

  // Finding the max element.
  cout << "Max -->>" << max(a,b) << endl;

  // Finding the min element.
  cout << "Min -->>" << min(a,b) << endl;

  // Swap two elements.
  swap(a,b);
  cout << "Value of 'a' after swapping : " << a << endl;
  cout << "Value of 'b' after swapping : " << b << endl;

  // String reverse.
  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());
  cout << "String after reverse : " << abcd << endl;

  // Rotate vector.
  cout << "Before rotate : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;


  rotate(v.begin(), v.begin()+1, v.end()-2);

  cout << "After rotate : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;

  // Sort.
  cout << "Before sorting : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;

  sort(v.begin(), v.end());

  cout << "After sorting : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;

  // Finding iterator for an element and then printing all the elements after that.

  // auto it = v.find(20);


} 