//Stack implementation in C++.
// Stack works on LIFO.

#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack <string> s;

  s.push("Hello");
  s.push("Wow");
  s.push("This");
  s.push("That");
  s.push("Now");
  s.push("When");

  //To peek at the top element.
  cout << "Top element : " << s.top() << endl;
  
  //Pop an element.
  s.pop();

  cout << "Top element : " << s.top() << endl; 

  cout << "Size of stack : " << s.size() << endl;  

  cout << "Empty or not : " << s.empty() << endl;

  
} 