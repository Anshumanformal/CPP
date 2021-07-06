#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pythogoreanTriplet(int x, int y, int z){
   int a = max(x,max(y,z));
   int b,c;
   if(a==x){
       b = y;
       c = z;
   }
   else if(a==y){
       b = x;
       c = z;
   }
   else {
       b = x;
       c = y;
   }
   if(a*a == b*b + c*c) return true;
   else return false;
}

int32_t main(){

int a,b,c;
cin>>a>>b>>c;

if(pythogoreanTriplet(a,b,c)) cout<<"Pythogorean triplets"<<endl;
else cout<<"Not a pythogorean triplet"<<endl;

return 0;
}