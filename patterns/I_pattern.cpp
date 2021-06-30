#include<iostream>
using namespace std;
/*

*****
  *  
  * 
  * 
*****

*/
int main(){
  int row = 5, col = 6;
  int center = col%2 != 0 ? col/2 + 1 : col/2;

  for(int i=1; i<=row; i++){
      for(int j=1; j<=col; j++){
          if(i == 1 || i == row){
              cout<<"*";
          }
          else if(j!=center){
            cout<<" ";
          }
          else cout<<"*";
         }
      cout<<endl;
  }
  return 0;
}