#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cout<<"Program to convert a sting in lowercase using strlwr() function : "<<endl;
	cout << "Enter a string :... ";
	cin >> str;
	strlwr(str);
	cout << "The lowercase string is : " << str << endl;
	return 0;
}