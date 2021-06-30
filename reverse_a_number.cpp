//Reverse a number.

#include<iostream>
using namespace std;

int main(){

int a = 5643;
int reverse=0;
while(a>0){
    int lastDigit = a%10;
    reverse = reverse*10 + lastDigit;
    a = a/10;
}
cout<<"reverse: "<<reverse<<endl;

return 0;
}