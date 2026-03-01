#include<iostream>
using namespace std;
int main() {
	cout<<"Program to print numbers from 1 to 10, but stop the loop when the number reaches 5 : "<<endl;
	for (int i=1;i<=10;i++) {
		if (i==5)
			break;
		else
			cout<<i<<endl;
	}
	return 0;
}