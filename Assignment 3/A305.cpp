#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main() {
	int num1,num2;
	cout<<"Program to swap two numbers using call by reference function : "<<endl;
	cout<<"Enter the first number :... ";
	cin>>num1;
	cout<<"Enter the second number :... ";
	cin>>num2;
	cout<<"Numbers before swapping : "<<num1<<" and "<<num2<<endl;
	swap(&num1,&num2);
	cout<<"Numbers after swapping : "<<num1<<" and "<<num2;
	return 0;
}
void swap(int *a,int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return;
}