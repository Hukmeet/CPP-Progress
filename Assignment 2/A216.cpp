#include<iostream>
using namespace std;
int main() {
	int num,n,n2,len=0,rem,rev=0;
	cout<<"Program to check if a given number is a palindrome : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	n=num;
	n2=num;
	//to count the number of digits...
	if (n<0)
		n=0-n;
	while (n>0) {
		n/=10;
		len+=1;
	}
	//now we know the length of the no (len: no. of digits)
	for (int i=1;i<=len;i++) {
		rem=n2%10;
		rev=rev*10+rem;
		n2=n2/10;
	}
	if (rev==num)
		cout<<"The number entered is a palindrome. ";
	else 
		cout<<"The number entered is not a palindrome. ";
	return 0;
}