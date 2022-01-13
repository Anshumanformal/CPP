#include<iostream>
using namespace std;

//By simple for loop.
int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

//By recursion.
// int factorial(int n){
//     int result = 0;
//     if(n == 0 || n == 1) return 1;
//     else return( n*factorial(n-1));
// }

int main(){

int number;
cin>>number;

int result = fact(number);
cout<<"Factorial of "<<number<<" is "<<result<<endl;


return 0;
}