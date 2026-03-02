#include<iostream>
using namespace std;
int main() {
	int num,rev=0,len=0,n,rem;
	cout<<"Program to reverse a given number : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	n=num;
	//to count the number of digits...
	if (n<0)
		n=0-n;
	while (n>0) {
		n/=10;
		len+=1;
	}
	//now we know the length of the no (len: no. of digits)
	for (int i=1;i<=len;i++) {
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"The reversed number is : "<<rev;
	return 0;
}