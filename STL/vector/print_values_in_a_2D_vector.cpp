#include <iostream>
#include <vector>
using namespace std;

int main() {

   // Initialization with '=' or without equal to works the same.
//    vector<vector<int>> v = 
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     cout << "Printing using normal for loop:\n";
//     for(int i=0; i<v.size(); i++){
//         for(int j=0; j<v[0].size(); j++){
//             cout << v[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     cout << "Printing using C++ stl way----\n";
//     for(vector<int> vectId : v){
//         for(int i : vectId){
//             cout << i << " ";
//         }
//         cout << "\n";
//     }

// --------------------------------------------------------
// Custom User input in 2D vectors.

int row = 3;
int column = 2;

vector<vector<int>>v(row, vector<int>(column));

for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        v[i][j] = i+j; // some random value can be inserted(for demo purpose);
    }
}

for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
       cout << v[i][j] << " ";
    }
    cout << "\n";
}

    return 0;
}