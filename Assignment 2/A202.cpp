#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Program to find the largest number among three numbers : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>a;
	cout<<"Enter the second number :... ";
	cin>>b;
	cout<<"Enter the third number :... ";
	cin>>c;
	if ((a>b)&&(a>c))
		cout<<a<<" is the largest number. ";
	else if (b>c)
		cout<<b<<" is the largest number. ";
	else
		cout<<c<<" is the largest number. ";
	return 0;
}