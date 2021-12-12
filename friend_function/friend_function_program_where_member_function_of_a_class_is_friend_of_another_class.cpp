//Friend function program where class member function is a friend of another function.
#include<iostream>
using namespace std;

class A{
    public:
        void fun(){
            //This is 2.
        }
        void foo(){
            //This is 3.
        }
};

class B{
    public:
        friend void fun(); //This refers to 1.
        friend void A :: fun(); //This refers 2.
        friend void A :: foo(); //This refers 3.//Same as previous fun().
        friend class A; //To make every member function of class A, a friend of class B.
        //But if we want 9/10 class A member functions to be a friend of class B, then we have to explicitely declare each of 
        //them with class membership level. Same as done above.
};

void fun(){
//Here is 1.
}

int main(){
    //Some code.
    return 0;
}