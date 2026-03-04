#include <iostream>
#include <string>
using namespace std;
int main() {
	string S,sub;
	cout<<"Program to delete a substring from a string : "<<endl;
	cout<<"Enter the main string :... ";
	cin>>S;
	cout<<"Enter the substring to delete :... ";
	cin>>sub;
	size_t found = S.find(sub);
	if (found != string::npos) {
		S.erase(found, sub.length());
		cout << "The string after deletion is : " << S << endl;
	}
	else
		cout << "Substring not found in the main string." << endl;
	return 0;
}