#include <iostream>
using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
};

int main()
{
    //Both the objects box1 and box2 have their own copy of data members.
    Box box1;
    Box box2;

    double volume = 0;
    box1.length = 5;
    box1.breadth = 6;
    box1.height = 7;

    box2.length = 10;
    box2.breadth = 12;
    box2.height = 13;

    double volume1 = box1.length * box1.breadth * box1.height;
    cout << endl
         << "Volume of box1 is: " << volume1 << endl;
    double volume2 = box2.length * box2.breadth * box2.height;
    cout << endl
         << "Volume of box1 is: " << volume2 << endl;

    return 0;
}