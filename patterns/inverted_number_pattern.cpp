#include<iostream>
using namespace std;

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int main(){

int n = 5;

//1st solution.
// for(int i=n; i>=1; i--){
//     for(int j=1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

//2nd solution.
for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}