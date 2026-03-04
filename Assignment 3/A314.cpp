#include <iostream>
using namespace std;
void sum(int a[3][3]);
int main() {
	cout<<"Program to find find the sum of each row in two-dimensional array : "<<endl;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"The 2D array is : "<<endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"The respective sums of array columns are : "<<endl;
	sum(a);
    return 0;
}
void sum(int a[3][3]) {
	int sum;
	for (int i=0;i<3;i++) {
		sum=0;
		for (int j=0;j<3;j++)
			sum+=a[j][i];
		cout<<sum<<endl;
	}
	return;
}