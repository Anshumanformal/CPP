//To demonstrate the working of next() and prev()

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){

  vector <int> ar = {1,2,3,4,5};

  //Declaring iterators to a vector.
  vector <int> :: iterator ptr = ar.begin();
  vector <int> :: iterator ftr = ar.end();

  //Using next to return to new iterator.

  auto it = next(ptr,3); //points to 4.
  auto it1 = prev(ftr,3);  //points to 3.

  //Displaying iterator position for next() function.
  cout << "The position of new iterator using next() is : ";
  cout << *it << " ";
  cout << endl;

  //Displaying iterator position for prev() function.
  cout << "The position of new iterator using prev() is : ";
  cout << *it1 << " ";
  cout << endl;

  return 0;
}