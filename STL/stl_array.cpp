#include <iostream>
#include <array>

using namespace std;

int main(){
  int basic[3] = {1,2,3};

  //Array via stl;
  array <int, 3> a = {5,6,7};

  //Find size of an array.
  int size = a.size();

  //Print the elements of the array.
  for (int i=0; i<size; i++){
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "Element at 2nd index : " << a.at(2) << "\n";
  cout << endl;
  cout << "Empty or not" << a.empty() << "\n";
  cout << endl;
  cout << "Front element" << a.front() << "\n";
  cout << endl;
  cout << "Last element" << a.back() << "\n";
  cout << endl;
  return 0;
}