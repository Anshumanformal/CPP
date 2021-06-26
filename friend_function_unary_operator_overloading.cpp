//Unary operator overloading with friend function.
//We can perform operator overloading with member function, or we can use friend function to achieve the same.

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
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
        }
        friend Complex operator-(Complex);        
};

Complex operator-(Complex c){
            Complex temp;
            temp.a = -c.a;
            temp.b = -c.b;
            return temp;
        }

int main(){
    Complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    c2 = operator-(c1);
    c2.showData();
    return 0;
}