//Fibonacci sequence.

//0,1,1,2,3,5,8...

#include<iostream>
using namespace std;

void fibonacci(int num){
   int t1 = 0;
   int t2 = 1;
   int nextTerm;

   for(int i=1; i<=num; i++){
       cout<<t1<<endl;
       nextTerm = t1+ t2;
       t1 = t2;
       t2=nextTerm;
   }
return;
}

int main(){

int num = 10;
fibonacci(num);
return 0;
}