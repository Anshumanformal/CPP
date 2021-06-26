//Binary operator overloading with friend function.
//We can perform operator overloading with member function, or we can use friend function to achieve the same.

#include<iostream>
using namespace std;

/*
When overloading binary operators as a friend function, then the caller object is removed from its place,
and passed as an argument.
For eg.:-
-->> When operator+ is a member function:
        Complex operator+(Complex c){
            Complex temp.a = a + c.a;
            Complex temp.b = b + c.b;
        }
        return temp;

-->> When operator+ is a friend function:
    Complex operator+(Complex c1,Complex c2){
        Complex temp;
        temp.a = c1.a + c2.a;
        temp.b = c1.b + c2.b;
        return temp;
    }
--------------------------------------------------------------------------------------------
NOTE: When we call functions with the help of friend function, then '1 more argument' is passed,
and the caller object is removed from its place. This is because friend functions are only declared
inside different classes. But when they are defined, then don't need to be called by an object.
Hence, any/all required objects are passed as an argument.
    
*/


class Complex{
   private: 
        int a,b;
   public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
        }
        friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex c1,Complex c2){
    Complex temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(4,5);
    c3 = c1 + c2;
    c3.showData();
return 0;
}