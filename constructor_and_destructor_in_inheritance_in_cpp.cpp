//Constructor and destructor in inheritance in C++.

#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(int k){
            a = k;
            cout<<"a: "<<a<<endl;
        }
};

class B : public A{
    private:
        int b;
    public:
        //Child class constructor always calls parent class default
        //constructor.
        //If parameterized constructor is present in parent class,
        //then we have to supply both the child class arguments and the
        //parent class arguments.

        //Here, we are taking arguments in the child class,
        //and passing one of the arguments to the parent class.

        B(int x,int y):A(x){
            b = y;
            cout<<"b: "<<b<<endl;
        }
};

int main(){
//Passing the values from the B object to B class, then to A class.    
//Note:
//Order of call - derived class , then base class.
//Order of execution - base class, then derived class.
B obj(2,3);
return 0;
}