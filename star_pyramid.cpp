//Star pyramid or vertical triangle.

#include<iostream>
using namespace std;

/*

    * 
   * * 
  * * * 
 * * * * 
* * * * *  

*/

int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        
        //For spaces.
        int spaces = n-i;
        for(int j=1;j<=spaces; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }

return 0;
}