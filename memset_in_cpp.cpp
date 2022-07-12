#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    
    char str[10];
    memset(str, 'a', sizeof(char) * 5); // or we could have simply written sizeof(str)
    // in case we want to skip some memory addresses and fill after them
    memset(str+5, 'b', sizeof(char) * 5);
    cout << endl << str << endl;
    return 0;
}