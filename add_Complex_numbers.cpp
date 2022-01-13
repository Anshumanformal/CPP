//Add two complex numbers using classes.

#include<iostream>
using namespace std;

class Complex{
    private :
        int a,b;
    public:
        void set_Data(int x, int y){
            a = x;
            b = y;
        }
        void get_Data(){
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
        }
        Complex add(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }            
};

int main(){
    Complex c1,c2,c3;
    c1.set_Data(5,6);
    c2.set_Data(3,4);
    c3 = c1.add(c2);
    c3.get_Data();
    return 0;
} 