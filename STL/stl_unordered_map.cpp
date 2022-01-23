// Unordered map in C++ stl.

// Internally unordered_map is implemented using 'Hash Table', the key provided to map are hashed into indices of a hash table that is why the performance of data structure depends on hash function a lot but on an average, the cost of search, insert and delete from the hash table is O(1). 

#include <iostream>
#include<unordered_map>
using namespace std;

int main(){
  
  unordered_map<string, int> umap;
  umap["Ram"] = 10;
  umap["Shyam"] = 20;
  // Another way of insertion.
  umap.insert({"Mohan",50});
  umap.insert({"Lakshman",30});

  cout << "Traversing Unordered map data..." << endl;
  for(auto i:umap){
    cout << i.first << " " << i.second << endl;
  }

  return 0;
}