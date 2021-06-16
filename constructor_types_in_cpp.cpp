#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){
            cout<<"Default Constructor is called."<<endl; //Default constructor.
        }
        Complex(int a, int b){
            cout<<"Parameterized Constructor is called."<<endl; //Parameterized constructor.
        }
        //Copy constructor. Compiler creates two constructors when an object is initialized.
        //If default or parameterized constructor is made, then they are not handled by compiler,
        //but copy constructor is made at that time too.

        //But when copy constructor is made, irrespective of whether default/parameterized constructor
        //is made or not, then no constructor is implicitely made by the compiler.
        //This means that implicitely defining copy constructor is the HIGHEST PRIORITY of compiler(in terms of constructors).
       
        Complex (Complex &c){   //Copy constructor. 
            a = c.a;
            b = c.b;
            cout<<"Inside the copy constructor..."<<endl;
            cout<<"Value of a: "<<c.a<<endl<<"Value of b: "<<c.b<<endl;
        }
};

int main(){
    //Irrespective of the order of initialization/object definition via constructors,
    //parameterized constructors are always called FIRST, then the default constructor is called. 

//Program is not complete as I am not able to access a and b inside the copy constructor. 
    Complex c1(3,3);
    Complex c3(c1);
    
    return 0;
}