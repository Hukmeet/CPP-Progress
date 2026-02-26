#include<iostream>
using namespace std;
int main() {
	int a;
	cout<<"Program to perform operations on the number input : "<<endl;
	cout<<"Enter the number :... ";
	cin>>a;
	a=(((a+40)/5)%2)*10;
	cout<<"Upon allying the operations the number has become : "<<a;
	return 0;
}