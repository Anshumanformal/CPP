/*

Function template in C++.

1. The keyword template is used to define function
template and class template.

2. It is a way to make your function or class generalize,
as far as datatype is concerned.

3. If we have to use function overloading just because of datatype
change then we should use 'templates' as the logic is same.

4. Function template = generic template.

Syntax: template <class X> X <function_name>(X arg1,arg2...);
*/

//Big of 2 numbers using templates.
#include<iostream>
using namespace std;

template <class X> void displayBigNumber(X a,X b){
    X big = a;
    if(big<b) big = b;
    cout<<big<<endl;
}

int main(){
    displayBigNumber(3,4);    
    displayBigNumber(5.5,2.3);    
    return 0;
}
