#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num,n,n2,len=0,sum=0,dig;
	cout<<"Program to check if a given number is an Armstrong number : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	n=num;
	n2=num;
	if (n<0)
		n=0-n;
	while (n>0) {
		n/=10;
		len+=1;
	}
	for (int i=1;i<=len;i++) {
		dig=n2%10;
		sum+=pow(dig,len);
		n2/=10;
	}
	if (sum==num)
		cout<<"Number entered is an Armstrong number. ";
	else
		cout<<"Number entered is not an Armstrong number. ";
	return 0;
}