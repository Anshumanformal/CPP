//Binary operator overloading.

#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
        }
         //If here we write Complex c2, then the constructor of c2 will be called, which will result in recursion.
        // Hence we use the reference of c2.
        Complex operator+(Complex &c){
            Complex sum;
            sum.a = a + c.a;
            sum.b = b + c.b;
            return sum;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}