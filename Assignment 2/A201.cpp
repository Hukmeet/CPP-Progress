#include<iostream>
using namespace std;
int main() {
	int num;
	bool prime=1;
	cout<<"Program to check whether a number is prime of not : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	for (int i=2;i<=(num/2);i++) {
		if (num%i==0) {
			prime=0;
			break;
		}
	}
	if (num<=0) 
		cout<<"Enter a valid(natural) number. ";
	else if (num==1)
		cout<<"The number entered is not prime. ";
	else if (prime)
		cout<<"The number entered is prime. ";
	else
		cout<<"The number entered is not prime. ";
	return 0;
}