// Set implementation in C++.

// It stores only unique elements.
// Elements are fetched in sorted order.

// Set is slower than unordered set.
// In unordered set, elements are fetched in unsorted order.


#include <iostream>
#include <set>

using namespace std;
int main() {

  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(3);
  s.insert(3);  // Time complexity - Olog(n) - because of BST.

  // Elements are still the same, inspite of adding them multiple times.
  // Print set.
  cout << "Elements of set : " << endl;
  for(auto i : s){
    cout << i << endl;
  }cout << endl;

  // Erase an element.
  set <int> :: iterator it = s.begin();
  it++;  // to delete the 1st element.

  s.erase(it);

  cout << "Elements of set : " << endl;
  for(auto i : s){
    cout << i << endl;
  }cout << endl;

  // Check is an element is present or not.
  // int a;
  // cout << "Enter the element you want to check in the set : " << endl;

  // cin >> a;
  
  cout << "Element is present or not : " << s.count(5) << endl;

  set <int> :: iterator itr = s.find(3);

  cout << "Return the iterator : " << *itr << endl;


  cout << "Printing the elements after the iterator : " << endl;
  for(auto it=itr ; it != s.end(); it++){
    cout << *it << " ";
  }cout << endl;
} 