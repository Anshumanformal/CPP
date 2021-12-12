//Friend function with stream insertion and extraction operator.
/*
NOTE : cin and cout are objects of some class which has definitions for << and >>.
       We can write this in 3 ways:-
       cout<<data;
       cout.operator<<(data);
       operator<<(cout,data);

*/


//Program is not complete. Watch stream insertion/extraction operator overloading from Saurabh Shukla Sir.


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
};

int main(){
    Complex c1;
    return 0;
}