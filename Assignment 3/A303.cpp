#include<iostream>
using namespace std;
int len();
int main() {
	cout<<len();
	return 0;
}
int len() {
	int num,len=0;
	cout<<"Program to count digits of any number using function with no argument and integer return type : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	while (num>0) {
		num/=10;
		len++;
	}
	cout<<"The given number has a length of : ";
	return len;
}