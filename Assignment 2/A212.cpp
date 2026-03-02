#include<iostream>
using namespace std;
int main() {
	int num,sum=0,dig,n,len=0;
	cout<<"Program to find the sum of digits of a given number : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	n=num;
	if (n<0)
		n=0-n;
	while (n>0) {
		n/=10;
		len+=1;
	}
	for (int i=0;i<len;i++) {
		dig=num%10;
		sum+=dig;
		num/=10;
	}
	cout<<"The sum of digits is : "<<sum;
	return 0;
}