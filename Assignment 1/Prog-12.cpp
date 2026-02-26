#include<iostream>
using namespace std;
int main() {
	int a;
	cout<<"Program to perform operations on the number input by using assignment operators : "<<endl;
	cout<<"Enter the number :... ";
	cin>>a;
	a+=40;
	a/=5;
	a%=2;
	a*=10;
	cout<<"Upon allying the operations the number has become : "<<a;
	return 0;
}