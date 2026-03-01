#include<iostream>
using namespace std;
int main() {
	int num,check;
	cout<<"Program to check if a number is even or odd using switch case : "<<endl;
	cout<<"Enter the number :... ";
	cin>>num;
	check=num%2;
	switch (check) {
		case 0:
			cout<<"Number entered is even.";
			break;
		case 1:
			cout<<"Number entered is odd.";
			break;
	}
	return 0;
}