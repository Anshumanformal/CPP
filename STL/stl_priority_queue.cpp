// Priority queue implementation in C++.

// A priority queue is by default a max heap.

#include <iostream>
#include <queue>

using namespace std;
int main() {

  // max heap
  priority_queue <int> maxi;

  // min heap

  // Syntax : priority_queue <Type, vector<Type>, ComparisonType > min_heap;
  
  // `The third parameter, ‘Comparison Type’ can either be a function or factor (aka function object) that must have bool as return-type and must have 2 arguments.

  priority_queue<int, vector<int>, greater<int>> mini; // min heap

  // Inserting data in max heap.
  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);

 // Printing the max -heap priority queue.
 int n = maxi.size(); 
  for(int i = 0; i < n; i++){
    cout << maxi.top() << " ";
    maxi.pop();
  }
  cout << endl;

  // Inserting data in min heap.
  mini.push(5);
  mini.push(9);
  mini.push(2);
  mini.push(7);

 // Printing the min - heap priority queue.
 int x = mini.size(); 
  for(int i = 0; i < n; i++){
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;

  //Check if the priority queue is empty or not.
  // 1 is true, 0 is false.
  cout << "Max heap priority queue is empty : " << maxi.empty() << endl;
  cout << "Max heap priority queue is empty : " << mini.empty() << endl;

} 