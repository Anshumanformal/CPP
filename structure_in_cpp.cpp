//Create a function which returns a structure.

#include<iostream>
#include<cstring>
using namespace std;

struct book{
    int bookid;
    char title[20];
    float price;
};

void display(book);
book input();

void display(book b){
    cout<<b.bookid<<" "<<b.price<<" "<<b.price<<endl;
}

book input(){
    book b;
    cout<<"Enter bookid, title and price of book";
    cin>>b.bookid>>b.title>>b.price;
    return b;
}
int main(){
    book b1;
    b1 = input();
    display(b1);
    return 0;
}