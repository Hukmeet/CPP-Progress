#include<iostream>
using namespace std;
int main() {
	float P,R,T,SI;
	cout<<"Program to calculate Simple Interest : "<<endl;
	cout<<"Enter the value of Principle :... ";
	cin>>P;
	cout<<"Enter the value of Rate :... ";
	cin>>R;
	cout<<"Enter the value of Time :... ";
	cin>>T;
	SI=(P*R*T)/100;
	cout<<"The simple interest is : "<<SI;
	return 0;
}