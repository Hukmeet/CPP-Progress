#include<iostream>
using namespace std;
int main() {
	cout<<"Program to print numbers from 1 to 20, but skip the numbers 7,11,17 : "<<endl;
	for (int i=1;i<=20;i++) {
		if ((i==7)||(i==11)||(i==17))
			continue;
		else
			cout<<i<<endl;
	}
	return 0;
}