#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cout<<"Program to convert a string in uppercase using strupr() function : "<<endl;
	cout<<"Enter a string :... ";
	cin>>str;
	strupr(str);
	cout<<"The uppercase string is : "<<str;
	return 0;
}