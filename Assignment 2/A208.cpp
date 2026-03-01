#include<iostream>
using namespace std;
int main() {
	int num,fact=1;
	cout<<"Program to find the factorial of a given number : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	if (num>0) {
		for (int i=1;i<=num;i++) {
		fact*=i;
		}
		cout<<"The factorial of "<<num<<" is : "<<fact;
	}
	else if (num==0)
		cout<<"The factorial of 0 is 1";
	else
		cout<<"Enter a natural number.";
	return 0;
}