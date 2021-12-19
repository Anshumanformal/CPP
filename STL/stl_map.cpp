// Map implementation in C++.

// It stores values in the form of key-value pairs.
// In map, one key can map to only one value - one to one relationship.
// Other key can also point to the same value - many to one relationship.

// By default, a map is a sorted map. 

#include <iostream>
#include <map>

using namespace std;
int main() {

  map<int, string> m;
  m[1] = "Hello";
  m[2] = "Wow";
  m[13] = "Hi";
  m[156] = "Ram";
  m[21] = "Shyam";

// Another way of inserting data.
  m.insert({5, "Yeah"});

  for(auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  
  cout << endl;
// To check if an element is present or not.
// 1 is true, 0 is false.
cout << "Find 13 : " << m.count(13) << endl << endl;

// Erase operation.
cout << "Before erase : " << endl;
for(auto i : m){
  cout << i.first << " " << i.second << endl;
} 
cout << endl;

m.erase(13);

cout << "After erase : " << endl;
for(auto i : m){
  cout << i.first << " " << i.second << endl;
} cout << endl;


// 'Find' returns the iterator of the given element.
auto it = m.find(5);

cout << "Printing all values after the iterator is received : " << endl;
for(auto i = it; i != m.end(); i++){
  cout << (*i).first << " " << (*i).second << endl;
}



} 