//Rhombus pattern.

#include<iostream>
using namespace std;

/*

     *****
   ****
  ***
 **
*

*/

int main(){
    int n = 5;
    for(int i=5; i>=1; i--){
        //For spaces.
        int spaces = i-1;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        
        for(int j=1;j<=i; j++){ //Making the loop run till the row number. So as row number decreases, stars also decrease.
            cout<<"* ";
        }
        cout<<endl;
    }

return 0;
}