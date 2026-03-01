#include<iostream>
using namespace std;
int main() {
	int a=0,b=1,m,n;
	cout<<"Program to print Fibonacci series up to n terms : "<<endl;
	cout<<"Enter the value of n :... ";
	cin>>n;
	cout<<"The Fibonacci Series goes like : "<<endl<<a<<endl<<b<<endl;
	for (int i=0;i<=n-3;i++) {
		m=a+b;
		a=b;
		b=m;
		cout<<m<<endl;
	}
	return 0;
}