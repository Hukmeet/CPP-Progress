#include<iostream>
using namespace std;
int main() {
	int m,n,i,p=0;
	cout<<"Program to multiply two numbers without using * operator : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>m;
	cout<<"Enter the second number :... ";
	cin>>n;
	for (i=0;i<n;i++)
		p+=m;
	cout<<"The product is : "<<p;
	return 0;
}