#include <iostream>
using namespace std;
int max(int a[3][3]);
int min(int a[3][3]);
int main() {
	cout<<"Program to find maximum and minimum element in two-dimensional array : "<<endl;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"The 2D array is : "<<endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"The maximum element in the array is : "<<max(a)<<endl;
	cout<<"The minimum element in the array is : "<<min(a)<<endl;
    return 0;
}
int max(int a[3][3]) {
	int max=a[0][0];
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			if (a[i][j]>max)
				max=a[i][j];
		}
	}
	return max;
}
int min(int a[3][3]) {
	int min=a[0][0];
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			if (a[i][j]<min)
				min=a[i][j];
		}
	}
	return min;
}