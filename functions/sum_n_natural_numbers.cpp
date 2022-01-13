#include<iostream>
using namespace std;

int add(int n){
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i;
    }
    return ans;
}

int main(){

int n = 5;
//Formula: n(n+1)/2;
//Other method: Use for loop.

int result = add(n);
cout<<result<<endl;
return 0;
}