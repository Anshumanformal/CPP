//Inverted half pyramid.

/*

*****
****
***
**
*

*/

#include<iostream>
using namespace std;

int main(){
    int row = 5, col = 5;

    //1st approach.
    //Ascending order.
    
    // for(int i = 1; i<=row; i++){
    //     for(int j = 1; j <=col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     col--;
    // }

    //2nd approach.
    //Descending order.

    // for(int i = row; i>=1; i--){
    //     for(int j = col; j>=1; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     col--;
    // }

    //3rd approach.
    //Decreasing the row, but increasing the column. Here only row is used as, 5 stars are printed
    //in 5th row, 4 stars are printed in 4th row and so on.
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){ //We can also write j<=row and then row-- after column loop end.
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}