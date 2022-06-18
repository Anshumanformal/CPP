// Deque implementation in C++.
// Pronounced as 'Deck'

/*
In deque, we can insert and remove elements from both front and back.
It's full form is Double Ended Queue.
It is similar to a vector.
*/

#include <iostream>
#include <deque>

using namespace std;
int main() {

//Creating a deque.
deque <int> d;

//Inserting elements.
d.push_back(1);
d.push_back(2);
d.push_back(3);
d.push_front(4);
d.push_front(5);
d.push_front(6);

//Print deque.
cout << "Printing deque:"<< endl;
for(int i : d){
  cout << i << " ";
}
cout << endl << endl;

//Size of deque.
cout << "Size of deque--->> " << d.size();
cout << endl << endl;

//Pop from back
cout << "Doing pop from back..."<< endl << endl;
d.pop_back();

//Print deque.
cout << "Printing deque:" << endl;
for(int i : d){
  cout << i << " ";
}

cout << endl << endl;

//Pop from front
cout << "Doing pop from front..."<< endl << endl;
d.pop_front();

//Print deque.
cout << "Printing deque:" << endl;
for(int i : d){
  cout << i << " ";
}

cout << endl << endl;

cout << "Front element : " << d.front() << endl << endl;

cout << "Back element : " << d.back() << endl << endl;

//Empty -->> 0 means false
// 1 means true

cout << "Deque is empty or not : " <<d.empty() << endl << endl;

//Erasing an element.
cout << "Before erase : " << d.size() << endl << endl;;

//Here, we need to pass the start and end index of the erase operation.

d.erase(d.begin(), d.begin()+1);

cout << "After erase : " << d.size() << endl << endl;

}