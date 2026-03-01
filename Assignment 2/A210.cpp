#include<iostream>
using namespace std;
int main() {
	long long int num;
	int cnt=0;
	cout<<"Program to count the number of digits in a given number : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	if (num<0)
		num=0-num;
	while (num>0) {
		num/=10;
		cnt+=1;
	}
	cout<<"The length of the number entered is : "<<cnt;
	return 0;
}