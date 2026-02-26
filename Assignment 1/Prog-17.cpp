#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float a,b,c,x1,x2,D;
	cout<<"Program to calculate roots of a Quadratic Equation : "<<endl;
	cout<<"Let the quadratic equation be of the format : a(x)^2 + bx + c = 0. "<<endl;
	cout<<"Enter the first coefficient, a :... ";
	cin>>a;
	cout<<"Enter the second coefficient, b :... ";
	cin>>b;
	cout<<"Enter the third coefficient, c :... ";
	cin>>c;
	D=(b*b)-(4*a*c);
	if (D>0) {
		x1=((-b)+sqrt(D))/2*a;	
		x2=((-b)-sqrt(D))/2*a;
		cout<<"This quadratic equation has two real roots. \nThey are : x="<<x1<<"\t and \tx="<<x2<<". ";
	}
	else if (D==0) {
		x1=(-b)/(2*a);
		cout<<"This quadratic equation has two equal real roots. \nNamely : x="<<x1<<". ";
	}
	else
		cout<<"This quadratic equation has no real solution. (Discriminant is negative.)";
	return 0;
}