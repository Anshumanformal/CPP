//String operations.
#include<iostream>
#include<string>
#include<cstring>


using namespace std;

const int MAX = 10;

class String{
	private:
		char str[MAX];
	public:
		String();
		String(char *s);
		int xstrlen();
		static void xstrcpy(string &t, string &s);
		static void xstrcat(string &t, string &s);
		static void xstrcmp(string &s1, string &s2);
		void show();	
};

//Initialises data members.
String :: String(){
	
}

//Initialises data members.
String :: String(char *s){
	strcpy(str, s);
}

//Finds the length of the string.
int string :: xstrlen(){
	int l = 0;
	char *s = str;
	while(*s){
		l++;
		s++;
	}
	return l;
}

//Copies source string s to the target string t.
void string :: xstrcpy(string &t, string &s){
	char *s1 = t.str;
	char *s2 = s.str;
	while (*s2){
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

//Concatenates the two strings.
void string :: xstrcat(string &t, string &s){
	char *s1 = t.str;
	char *s2 = s.str;
	while(*s1)
		s1++;
	while(*s2)
		*s1++ = *s2++;
	*s1 = '\0';		
}

//Compares the two strings s1 and s2 for equality.
int string :: xstrcmp(string &s1, string s2){
	char *s = s1.str;
	char *t = s2.str;
	
	while(*s == *t){
		if(!(*s))
			return 0;
		s++;
		t++;	
	}
	return (*s - *t);
}

//Displays the string.
void string :: show(){
	cout<<"\nstr\n";
}

int main(){

string s1("kicit");
string s2("Nagpur");

cout<<"\n";
cout<<"String s1: ";
s1.show();
cout<<"\nLength of the string s1: "<<s1.xstrlen()<<"\n";

cout<<"\nString s2: ";
s2.show();

String s3;
string::xstrcpy(s3,s1);
cout<<"\nString s3 after copying s1 to it.\n";
s3.show();

string :: xstrcat(s3,s2);
cout<<"\nString s3 after concatenation:\n";
s3.show();

if(string :: xstrcmp(s1,s2) == 0)
	cout<<"\nThe strings s1 and s2 are similar.\n";
else
	cout<<"\nThe strings s1 and s2 are not similar.\n";	

return 0;
}

