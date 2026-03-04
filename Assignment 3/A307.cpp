#include<iostream>
using namespace std;
void fib(int *a,int *b,int *m,int *n);
int main() {
	int a=0,b=1,m,n;
	cout<<"Program to print Fibonacci series up to specified term using recursion : "<<endl;
	cout<<"Enter the number of terms up to which the Fibonacci series is to be printed :... ";
	cin>>n;
	cout<<"The Fibonacci series is as follows : "<<endl;
	fib(&a,&b,&m,&n);
	return 0;
}
void fib(int *a,int *b,int *m,int *n) {
	if (*n==1) {
		cout<<*a<<endl;
		return;
	}
	else if (*n==2) {
		*n=*n-1;
		fib(a,b,m,n);
		cout<<*b<<endl;
		return;
	}
	else {
		*n=*n-1;
		fib(a,b,m,n);
	}
	*m=*a+*b;
	*a=*b;
	*b=*m;
	cout<<*m<<endl;
	return;
}