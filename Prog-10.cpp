#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
    int n;
    float mrk=0;
    cout<<"Program to display marks of subjects and calculate percentage : "<<endl;
    cout<<"Enter the number of subjects : ";
    cin>>n;
    if (n>=7) {
        float marks[n];
        string sub[n];
        cout<<"Enter the subject names one-by-one : "<<endl;
        for (int i=0;i<n;i++) {
            cout<<"Enter the Subject Name :... ";
            cin>>sub[i];
            cout<<"Enter the marks (out of 100) in "<<sub[i]<<" :... ";
            cin>>marks[i];
        }
        cout<<endl<<"The data entered is as follows : "<<endl;
        for (int i=0;i<n;i++) {
             cout<<sub[i]<<setw(20)<<marks[i]<<endl;
             mrk+=marks[i];
        }
        cout<<endl<<"The percentage is : "<<(mrk/(n*1.0));
    }
    else
        cout<<"You cannot Enter less than 7 subjects.";
    return 0;
}