// It finds the nth element without actually sorting the array or vector.
// Time complexity - O(n)


#include <bits/stdc++.h>
using namespace std;

int main(){

  int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 };
  int n=2;
  // finding the nth element = 6th element in the array.
  // Simple sorting and accesing the value is better for smaller arrays as Time complexity = O(nlogn) + O(1) = O(logn)
  std::nth_element(v, v + n, v + 8);

  for(int i=0; i<8; i++)
    cout << v[i] << " "; 

  // in case of vector
  vector<int> vec = {7,3,4,10,20,15};
  int size = vec.size();
  int k=3;

  std::nth_element(vec.begin(), vec.begin() + k, vec.end());

  for(int i=0; i<size; i++)
    cout << vec[i] << " ";   
  
  return 0;
}