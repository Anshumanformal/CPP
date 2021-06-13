// #include<iostream>
// using namespace std;

// class Complex{
//     private :
//         int a,b;
//     public :
//         void set_Data(){
//             cout<<"Enter the values for a and b"<<endl;
//             cin>>a>>b;
//         }

//         void get_Data(){
//             cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
//         }
// };

// int main(){
//     Complex c;
//     c.set_Data();
//     c.get_Data();
//     return 0;
// }


//With scope resolution operator.

#include<iostream>
using namespace std;

class Complex{
    private : 
        int a, b;
    public:
        void set_Data();
        void get_Data();
};

void Complex :: set_Data(){
    int x,y;
    cout<<"Enter values for a and b"<<endl;
    cin>>x>>y;
    a = x;
    b = y;
}

void Complex :: get_Data(){
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
}

int main(){
    Complex c;
    c.set_Data();
    c.get_Data();
    return 0;
}