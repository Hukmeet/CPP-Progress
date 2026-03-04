#include <iostream>
using namespace std;
void rev(int* a,int* a2,int len);
int main() {
	cout<<"Program to reverse an array : "<<endl;
	int len;
	cout<<"Enter size of the array :... ";
	cin>>len;
	int a[len],a2[len];
	cout<<"Enter the elements of the array : "<<endl;
    for (int i=0;i<len;i++) {
        cin>>a[i];
    }
	cout<<"The reversed array elements are : "<<endl;
	rev(a,a2,len);
	for (int i=0;i<len;i++)
		cout<<a2[i]<<endl;
    return 0;
}
void rev(int* a,int* a2,int len) {
	for (int i=0;i<len;i++)
		a2[i]=a[len-i-1];
	return;
}