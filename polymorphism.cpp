#include<iostream>
using namespace std;

//Function overloading : same name but different parameters.
void area(int, int);
void area(int);

void area(int x, int y){
cout<< 3.14 * x * y;
cout<<endl;
}

void area(int x){
cout<< x * x;
cout<<endl;
}


int main(){
area(5,6);
area(5);
}

