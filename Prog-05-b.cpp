#include<iostream>
using namespace std;
int main() {
	float cel,kel;
	cout<<"Program to Convert Temperature from Celsius to Kelvin : "<<endl;
	cout<<"Enter the value of Temperature in Celsius :... ";
	cin>>cel;
	kel=cel+273.15;
	cout<<"The value of Temperature in Kelvin is : "<<kel;
	return 0;
}