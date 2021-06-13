#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;

int main(){

char s1[] = "Tomato ";
char s2[] = "Potato";


//strcat
cout<<strcat(s1,s2)<<endl;

//strcpy
char s3[100];
cout<<strcpy(s3,s1)<<endl; 

//strchr
// char *pch;
// cout<<"Looking for character 'o' in \"%s\"..."<<s1<<endl;
// pch = strchr(s1,'o');
// while(pch!=NULL){
// 	cout<<"Found at %d"<<pch-s1+1<<endl;
// 	pch = strchr(pch+1,'s');
// }

//strcmp
cout<<strcmp(s1,s2)<<endl;

//strlen
cout<<strlen(s1)<<endl;

//strncat
cout<<strncat(s1,s2,3)<<endl;

//strncpy
cout<<strncpy(s1,s2,3)<<endl;

//strncmp
cout<<strncmp(s1,s2,3)<<endl;

    return 0;
}
