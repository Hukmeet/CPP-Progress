#include<iostream>
using namespace std;
int main() {
	int i;
	char c;
	cout<<"Program to print the next four characters of a given character : "<<endl;
	cout<<"Enter the starting character :... ";
	cin>>c;
	c++;
	cout<<"The next four characters are: ";
	for (i=0;i<4;i++)
		cout<<c++<<"  ";
	return 0;
}