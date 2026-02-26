#include<iostream>
using namespace std;
int main() {
	float cp,sp;
	cout<<"Program to calculate Profit or Loss of a product : "<<endl;
	cout<<"Enter the purchase price of the product in rupees :... ";
	cin>>cp;
	cout<<"Enter the selling price of the product in rupees :... ";
	cin>>sp;
	if (cp<sp)
		cout<<"You had a profit of : Rs. "<<(sp-cp);
	else if (cp>sp)
		cout<<"You had a loss of : Rs. "<<(cp-sp);
	else
		cout<<"You had neither pro nor loss.";
	return 0;
}