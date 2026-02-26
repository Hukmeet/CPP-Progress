#include<iostream>
using namespace std;
int main() {
	int hrs,mins;
	cout<<"Program to take time in 24 hour format and tell if it is in AM or PM : "<<endl;
	cout<<"Enter the hours :... ";
	cin>>hrs;
	cout<<"Enter the minutes :... ";
	cin>>mins;
	if ((hrs>=0)&&(hrs<12)) {
		if ((mins>=0)&&(mins<60))
			cout<<"Time is in AM.";
	}
	else if ((hrs==12)&&(mins==0))
		cout<<"Time is in AM.";
	else if ((hrs==12)&&((mins>0)&&(mins<60)))
		cout<<"Time is in PM.";		
	else if ((hrs>12)&&(hrs<24)) {
		if ((mins>=0)&&(mins<60))
			cout<<"Time is in PM.";		
	}
	else
		cout<<"Enter valid value of time. ";
	return 0;
}