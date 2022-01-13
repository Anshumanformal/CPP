//Constructor in C++.
//It is used to solve the problem of initialization.
//Writing className and then objectName creates/declares an object. But constructors help to define/initialize an object.

#include<iostream>
using namespace std;

class Complex{
    private :
        int a,b;
    public:
        Complex(){
            cout<<"Constructor is called"<<endl;
                }
};

int main(){
Complex c;
}