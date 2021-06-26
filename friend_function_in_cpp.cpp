//Friend function in CPP.

#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"a : "<<a<<endl<<"b : "<<endl;
        }
        friend void fun(Complex);
};

//Here, friend function is using member variables of same class. 
void fun(Complex c){
    cout<<"Inside friend function definition."<<endl;
    cout<<"Sum is : "<<c.a+c.b<<endl;
}

int main(){
    Complex c1;
    c1.setData(3,5);
    fun(c1);
    return 0;
}