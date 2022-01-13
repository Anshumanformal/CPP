// List stl is made up of Doubly-linked list.

#include <iostream>
#include <list>

using namespace std;
int main() {
  list <int> l;

  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_front(4);
  l.push_front(5);
  l.push_front(6);

  cout << "Elements of list : " << endl;
  for(int i : l){
    cout << i << " ";
  }
  cout << endl << endl;
  cout << "Before erase : " << endl;
  for(int i : l){
    cout << i << " ";
  }cout << endl << endl;

  cout << "Size of list : " << endl;
  cout << l.size() << endl << endl;

  //Erasing from front.
  l.erase(l.begin());
  cout << "After erase : " << endl;
  for(int i : l){
    cout << i << " ";
  }cout << endl << endl;

  //Size of list.
  cout << "Size of list : " << endl;
  cout << l.size() << endl << endl;

} 