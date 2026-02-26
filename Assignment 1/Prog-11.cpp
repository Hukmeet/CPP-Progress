#include<iostream>
using namespace std;
int main() {
	float cel,far,kel;
	cout<<"Program to Convert Temperature from Celsius to Kelvin and Fahrenheit : "<<endl;
	cout<<"Enter the value of Temperature in Celsius :... ";
	cin>>cel;
	kel=cel+273.15;
	far=((cel)*(9.0/5))+32;
	cout<<"The value of Temperature in Kelvin is : "<<kel<<endl;
	cout<<"The value of Temperature in Fahrenheit is : "<<far;
	return 0;
}