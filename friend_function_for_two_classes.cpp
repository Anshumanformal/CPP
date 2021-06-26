#include<iostream>
using namespace std;

//When working with two classes in a friend function, we need to provide FORWARD DECLARATION for other classes
//before the program starts.
    
class B;
class A{
    private:
        int a;
    public:
        void setData(int x){a = x;}
    friend void friendFunction(A,B);
};

class B{
    private:
        int b;
    public:
        void setData(int x){b = x;}
    friend void friendFunction(A,B);
};

void fun(A a,B b){
    cout<<"Sum of member variables a and b of class A and class B respectively : "<<a.a + b.b<<endl;
}

int main(){
    A obj1;
    B obj2;
    obj1.setData(3);
    obj2.setData(5);
    friendFunction(obj1,obj2);

    return 0;
}