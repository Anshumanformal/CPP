// Queue implementation in C++.

#include <iostream>
#include <queue>

using namespace std;
int main() {

  queue <string> q;

  q.push("wow");
  q.push("hello");
  q.push("this");
  
  // Print the front/first element of the queue.
  cout << "First element : " << q.front() << endl << endl;
  cout << "Size before popping : " << q.size() << endl << endl;
  cout << "Popping an element..." << endl << endl;
  q.pop();
  cout << "Size after popping : " << q.size() << endl;

} 