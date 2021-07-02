//nCr program.

#include<iostream>
using namespace std;

//Using simple for loop.
int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n=5, r=2;

    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<endl<<result<<endl;
return 0;
}