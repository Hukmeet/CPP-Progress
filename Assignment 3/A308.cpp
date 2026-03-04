#include <iostream>
using namespace std;
void merge(int* a1,int m,int* a2,int n,int* a,int s);
int main() {
    int m,n;
	cout<<"Program to merge two arrays using function : "<<endl;
	cout<<"Enter size of first array :... ";
	cin>>m;
	int a1[m];
	cout<<"Enter the elements of the first array : "<<endl;
    for (int i=0;i<m;i++) {
        cin>>a1[i];
    }
	cout<<"Enter size of second array :... ";
	cin>>n;
	int a2[n];
	cout<<"Enter the elements of the second array : "<<endl;
    for (int i=0;i<n;i++) {
        cin>>a2[i];
    }
	int s=m+n;
	int a[s];
	cout<<"The merged array is : "<<endl;
	merge(a1,m,a2,n,a,s);
	for (int i=0;i<s;i++)
		cout<<a[i]<<endl;
    return 0;
}
void merge(int* a1,int m,int* a2,int n,int* a,int s) {
	for (int i=0;i<m;i++)
		a[i]=a1[i];
	for (int j=m;j<s;j++)
		a[j]=a2[j-m];
	return;
}