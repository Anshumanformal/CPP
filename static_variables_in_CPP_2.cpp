#include<iostream>
using namespace std;

class Account{
    private:
        static float roi;
    public:
        static void setRoi(float x){
            roi = x;
            cout<<"Value of ROI is :"<<x<<endl;
        }
};

//One method.
float Account :: roi = 3.5;

int main(){
    Account a1,a2;
    Account :: setRoi(4.5);
    
    return 0;
}