#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout<<"Program to swap two numbers using two variables : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>a;
	cout<<"Enter the second number :... ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping : "<<endl;
	cout<<"The first number now is : "<<a<<endl;
	cout<<"The second number now is : "<<b;
	return 0;
}