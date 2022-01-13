// Unary operator overloading.

#include<iostream>
using namespace std;

class Complex{
    private:
        int a;
    public:
        void setData(int x){
            a = x;
        }
        void showData(){
            cout<<"a : "<<a<<endl;
        }
        Complex operator-(){
            Complex result;
            result.a = -a;
            return result;
        }
        Complex operator*(){
            Complex result;
            //Below both the ways are same.
            // result = 2*a;
            result.a = a*2;
            return result;
        }
};

int main(){
    Complex c1,c2;
    c1.setData(3);
    //Same as binary operator overloading, we can use unary operator overloading syntax in the below way.
    // c2 = c1.operator*(); 
    c2 = *c1;
    c2.showData();
    return 0;
}