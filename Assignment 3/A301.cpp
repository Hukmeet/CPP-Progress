#include<iostream>
using namespace std;
void sum();
int main() {
	sum();
	return 0;
}
void sum() {
	int a,b,sum;
	cout<<"Program for addition of two numbers using function with no argument and no return type : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>a;
	cout<<"Enter the second number :... ";
	cin>>b;
	sum=a+b;
	cout<<"The sum of "<<a<<" and "<<b<<" is : "<<sum;
	return;
}