#include <iostream>
using namespace std;
float avg(int* a,int len);
int main() {
	cout<<"Program to find average of array elements : "<<endl;
	int len;
	cout<<"Enter size of the array :... ";
	cin>>len;
	int a[len];
	cout<<"Enter the elements of the array : "<<endl;
    for (int i=0;i<len;i++) {
        cin>>a[i];
    }
	cout<<"The average of the array elements is : "<<avg(a,len);
    return 0;
}
float avg(int* a,int len) {
	float sum=0,avg;
	for (int i=0;i<len;i++) {
		sum+=a[i];
	}
	avg=sum/len;
	return avg;
}