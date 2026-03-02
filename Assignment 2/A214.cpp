#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Program to keep taking user input until they enter a negative number : "<<endl;
	do {
		cout<<"Enter the number :... ";
		cin>>n;
	} while (n>=0);
	cout<<"Negative input...Program Terminated...";
	return 0;
}