#include<iostream>
using namespace std;
long int fact(int n);
int main() {
	int num;
	cout<<"Program to calculate factorial using function with one argument and long int return type : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	if (num>0)
		cout<<"The factorial of "<<num<<" is : "<<fact(num);
	else
		cout<<"Enter a Valid number.";
	return 0;
}
long int fact(int n) {
	long int fact=1;
	for (int i=1;i<=n;i++)
		fact*=i;
	return fact;
}