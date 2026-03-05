#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cout<<"Program to find the length of a string using strlen() function : "<<endl;
	cout << "Enter a string :... ";
	cin >> str;
	int length = strlen(str);
	cout << "The length of the string is : " << length << endl;
	return 0;
}