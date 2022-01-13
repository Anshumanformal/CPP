#include<iostream>
using namespace std;

/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

int main(){
    int num = 5;
    for(int i=1; i<=num; i++){
        //Here we iterate the columns on the basis
        //of rows. Or we can say, column number
        //depends on row number.
        //No need to think about printing spaces.
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
return 0;
}