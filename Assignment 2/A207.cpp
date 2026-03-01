#include<iostream>
using namespace std;
int main() {
	cout<<"Program to print even numbers from 1 to 20 : "<<endl;
	for (int i=1;i<=20;i++) {
		if (i%2!=0)
			continue;
		else
			cout<<i<<endl;
	}
	return 0;
}