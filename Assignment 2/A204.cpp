#include<iostream>
using namespace std;
int main() {
	int n,sum=0;
	cout<<"Program to find the sum of all the natural numbers from 1 to n : "<<endl;
	cout<<"Enter the value of n :... ";
	cin>>n;
	for (int i=1;i<=n;i++)
		sum+=i;
	cout<<"The sum of first "<<n<<" natural numbers is : "<<sum;
	return 0;
}