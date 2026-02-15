#include<iostream>
using namespace std;
int main() {
    float radius,area;
    cout<<"Program to calculate area of circle :"<<endl;
    cout<<"Enter the radius of circle :... ";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"The area of circle is : "<<area;
    return 0;
}