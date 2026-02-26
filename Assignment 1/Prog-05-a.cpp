#include<iostream>
using namespace std;
int main() {
	float cel,far;
	cout<<"Program to Convert Temperature from Celsius to Fahrenheit : "<<endl;
	cout<<"Enter the value of Temperature in Celsius :... ";
	cin>>cel;
	far=((cel)*(9.0/5))+32;
	cout<<"The value of Temperature in Fahrenheit is : "<<far;
	return 0;
}