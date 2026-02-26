#include<iostream>
using namespace std;
int main() {
	int a;
	cout<<"Program to convert odd integer to it's upper even integer : "<<	endl;
	cout<<"Enter the integer :... ";
	cin>>a;
	if (a%2!=0) {
		a++;
		cout<<"The number entered was odd. It has now become : "<<a;
	}
	else
		cout<<"You entered an even number. It is : "<<a;
	return 0;
}