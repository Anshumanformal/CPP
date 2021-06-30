#include<iostream>
using namespace std;

class Account{
    private:
        static float roi;   //Static member variable.
    public:
        static void setRoi(float x){    //Static member function.
            roi = x;
            cout<<"Value of ROI is :"<<x<<endl;
        }
};

//One method.
float Account :: roi = 3.5;

int main(){
    Account a1,a2;
    Account :: setRoi(4.5); //Changing value with the help of static member function.
    
    return 0;
}