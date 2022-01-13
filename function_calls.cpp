#include<iostream>
using namespace std;

void fun1(int);
void fun2(int*);
void fun3(int &);

//Call by value.
void fun1(int x){
    cout<<endl<<x<<endl;
}

//Call by address.
void fun2(int *x){
    cout<<endl<<*x<<endl;
}

//Call by reference.
void fun3(int &x){
    cout<<endl<<x<<endl;
}


int main(){
    int a = 3;
    fun1(a); //Call by value.
    fun2(&a); //Call by address.
    fun3(a); //Call by reference.
    return 0;
}