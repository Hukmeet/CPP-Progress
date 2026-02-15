#include<iostream>
using namespace std;
int main() {
	float far, kel;
	cout<<"Program to Convert Temperature from Fahrenheit to Kelvin : "<<endl;
	cout<<"Enter the value of Temperature in Fahrenheit :... ";
	cin>>far;
	kel=((far-32)*(5.0/9))+273.15;
	cout<<"The value of Temperature in Kelvin is : "<<kel;
	return 0;
}