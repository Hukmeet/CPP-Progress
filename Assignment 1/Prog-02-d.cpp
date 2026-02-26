#include<iostream>
using namespace std;
int main() {
	float b,h,area;
	cout<<"Program to calculate area of a triangle : "<<endl;
	cout<<"Enter the length of the base of the triangle :... ";
	cin>>b;
	cout<<"Enter the length of the height of the triangle :... ";
	cin>>h;
	area=0.5*b*h;
	cout<<"The area of the triangle is : "<<area;
	return 0;
}