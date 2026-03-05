#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	char ch,nw;
	cout<<"Program to replace a character in a string : "<<endl;
	cout<<"Enter the string :... ";
	cin>>str;
	cout<<"Enter the character to replace :... ";
	cin>>ch;
	cout<<"Enter the new character :... ";
	cin>>nw;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ch)
			str[i] = nw;
	}
	cout<<"The modified string is : " << str << endl;
	return 0;
}