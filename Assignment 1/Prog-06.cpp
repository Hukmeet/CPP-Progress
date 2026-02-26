#include<iostream>
using namespace std;
int main() {
	int a,b,temp;
	cout<<"Program to swap two numbers using three variables : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>a;
	cout<<"Enter the second number :... ";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping : "<<endl;
	cout<<"The first number now is : "<<a<<endl;
	cout<<"The second number now is : "<<b;
	return 0;
}