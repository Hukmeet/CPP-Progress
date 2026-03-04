#include <iostream>
using namespace std;
int sum(int a[3][3]);
int main() {
	cout<<"Program to sum of element in two-dimensional array : "<<endl;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"The 2D array is : "<<endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"The sum of array elements is : "<<sum(a)<<endl;
    return 0;
}
int sum(int a[3][3]) {
	int sum=0;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
			sum+=a[i][j];
	}
	return sum;
}