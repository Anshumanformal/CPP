#include<iostream>
#include<cmath>
using namespace std;

//Armstrong number.
// 153 = 1**3 + 5**3 + 3**3;
//Sum of cubes of all digits should
//be equal to the number itself. 

int main(){
    int n;
    cin>>n;
    int sum = 0;
    //Copying the value of the number into another variable, as we will be manipulating the original number itself.
    int originalNumber = n;
    
    while(n>0){
    int lastDigit = n%10;
    sum += pow(lastDigit,3);
    n = n/10;
    }
    if(sum==originalNumber){
        cout<<"Armstrong Number"<<endl;
    } 
    else{
        cout<<"Not an armstrong number"<<endl;                  
    }   

return 0;
}