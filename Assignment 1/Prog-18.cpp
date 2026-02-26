#include<iostream>
using namespace std;
int main() {
	float u,bill;
	cout<<"Program to calculate Electricity Bill : "<<endl;
	cout<<"Enter the Electricity Unit Charges :... ";
	cin>>u;
	if ((u>=0)&&(u<=50))
		bill=u*0.50;
	else if ((u>50)&&(u<=150))
		bill=u*0.75;
	else if ((u>150)&&(u<=250))
		bill=u*1.20;
	else if (u>250)
		bill=u*1.50;
	else
		cout<<"Enter valid value of Unit Charges.";
	bill+=bill*0.2;
	cout<<"The total Electricity Bill is : "<<bill;
	return 0;
}