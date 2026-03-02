#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Program to print a hollow square (*) pattern : "<<endl;
    cout<<"Enter the size :... ";
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if ((i==0)||(j==0)||(i==n-1)||(j==n-1)) 
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
	return 0;
}