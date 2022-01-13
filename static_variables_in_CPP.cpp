#include<iostream>
using namespace std;

class Fun{
    private:
        int balance;
        static float roi;   //Static member variable.
    
    public: 
        void setBalance(int b){
            balance = b;
        }        
        void getData(){
            cout<<"Value of balance: "<<balance<<endl<<"Value of roi: "<<roi<<endl;
        }
};

//Defining static variables outside the class.
//Static member variable declaration works similar to global variable declaration.

float Fun :: roi = 3.5;
int main(){
    Fun f;
    f.setBalance(5);
    f.getData();
    return 0;
}