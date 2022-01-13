//Vector implementation in C++.

#include <iostream>
#include <vector>
using namespace std;

int main() {

  //Creating a vector.
  vector <int> v;

  //Printing the capacity.
  cout<< "Capacity--->>" << v.capacity()<<endl;

  //Inserting an element.
  v.push_back(1);
  cout<< "Capacity--->>" << v.capacity()<<endl;
  v.push_back(2);
  cout<< "Capacity--->>" << v.capacity()<<endl;
  v.push_back(3);
  cout<< "Capacity--->>" << v.capacity()<<endl;

  //Size of the vector.
  cout << "Size--->>" << v.size() << endl;

  cout << "Element at 2nd index : " << v.at(2) << endl;

  cout << "Front element--->>" << v.front() << endl;
  cout << "Back element--->>" << v.back() << endl;

  //Popping elements from the vector.
  //Printing array before pop operation.
  cout << "Before pop : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;

  v.pop_back();

  cout << "After pop : " << endl;
  for(int i : v){
    cout << i << " ";
  }cout << endl;

  //Clearing a vector. Here, only size becomes 0, but capacity remains the same.

  //Capacity -- how much memory is assigned to the vector.
  cout << "Before clear size : " << v.size() << endl;
  v.clear();
  cout << "After clear size : " << v.size() << endl;

  //Creating a vector with predefined elements.
  vector <int> a(5,1);

  //Print the vector.
  cout << "Printing a : ";
  for(int i : a){
    cout << i << " ";
  }cout << endl;

  //Creating a duplicate vector from a given vector.
  vector <int> duplicate_vector(a);
  cout << "Printing duplicate_vector : ";
  for(int i : duplicate_vector){
    cout << i << " ";
  }cout << endl;



} 