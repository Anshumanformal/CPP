// Pair is used to combine together two values that may be different in type. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 


// Syntax - pair (data_type1, data_type2) Pair_name
#include<bits/stdc++.h>
#include <utility>
using namespace std;

// int main(){

//     pair<int ,char> PAIR1;

//     // first part of the pair
//     PAIR1.first = 100;
//     // second part of the pair
//     PAIR1.second = 'G';
  
//     cout << PAIR1.first << " ";
//     cout << PAIR1.second << endl;

//     // Another way
//     pair<int,char> g1,g2;
//     g1 = make_pair(1,'a');
//     g2 = {2,'b'};

//     cout << "g1 first : " << g1.first << " and g1 second : " << g1.second << "\n";

//     cout << "g2 first : " << g2.first << " and g2 second : " << g2.second << "\n";
//     return 0;
// }

// -------------------------------------
// Swap function in pair

int main(){
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);

    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;

    // Swapping the pair.
    pair1.swap(pair2);
  
    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
  
    return 0;
}