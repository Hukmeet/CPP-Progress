#include<iostream>
using namespace std;
int main() {
	float a,b,c;
	cout<<"Program to check the validity of a triangle : "<<endl;
	cout<<"Enter the value of first angle of the triangle :... ";
	cin>>a;
	cout<<"Enter the value of second angle of the triangle :... ";
	cin>>b;
	cout<<"Enter the value of third angle of the triangle :... ";
	cin>>c;
	if (a+b+c==180.00)
		cout<<"This triangle is valid.";
	else
		cout<<"This triangle is invalid.";
	return 0;
}