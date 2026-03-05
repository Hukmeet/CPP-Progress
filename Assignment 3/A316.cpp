#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	string str;
	cout<<"Program to check whether the entered string is palindrome or not : "<<endl;
	cout<<"Enter the string :... ";
	cin>>str;
	string  rev=str;
	reverse(rev.begin(), rev.end());
	if (str==rev)
		cout<<"The string entered is a palindrome."<<endl;
	else
		cout<<"The string entered is not a palindrome."<<endl;
	return 0;
}