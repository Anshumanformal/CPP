//Pre and Post Operator overloading.

#include<iostream>
using namespace std;

class Integer{
    private:
        int a;
    public:
        void setData(int x){
            a = x;
        }
        void showData(){
            cout<<"a : "<<a<<endl;
        }
        //Pre-increment operator.
        Integer operator++(){
            Integer result;
            result.a = ++a;
            return result;
        }

        //When any data type is passed as an argument in pre/post operator, then
        //the function with any data type is referred as the post operator overloading function. 

        //Post increment operator.
        Integer operator++(int){
            Integer result;
            result.a = a++;
            return result;
        }
};

int main(){
    Integer i1,i2,i3;
    i1.setData(3);
    i1.showData();
    // i2 = i1.operator++(); //Pre operator overloading.
    i2 = ++i1;
    i3 = i1++; //Post operator overloading.
    i1.showData();
    i2.showData();
    i3.showData();
    return 0;
}