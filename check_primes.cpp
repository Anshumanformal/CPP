//Check for prime numbers between a range of numbers.

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int);

bool isPrime(int num){
   for(int i=2; i<=sqrt(num); i++){
       if(num%i==0) return false;
   }
   return true;
}

int main(){

    int a=10,b=40;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }


return 0;
}