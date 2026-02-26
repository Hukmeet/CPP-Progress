#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout<<"Program to display size of premitive data types in c++ : "<<endl;
	cout<<"Size of int datatype "<<setw(15)<<": "<<setw(3)<<sizeof(int)<<endl;
	cout<<"Size of char datatype "<<setw(14)<<": "<<setw(3)<<sizeof(char)<<endl;
	cout<<"Size of bool datatype "<<setw(14)<<": "<<setw(3)<<sizeof(bool)<<endl;
	cout<<"Size of float datatype "<<setw(13)<<": "<<setw(3)<<sizeof(float)<<endl;
	cout<<"Size of double datatype "<<setw(12)<<": "<<setw(3)<<sizeof(double);
	return 0;
}