#include <iostream>
using namespace std;
struct Student {
	int roll_no;
	char name[50];
	float marks;
};
int main() {
    Student students[3];
	cout<<"Program to illustrate the use of an array of structure : "<<endl;
    for (int i = 0; i < 3; i++) {
		cout << "Enter details for student " << i + 1 << ":" << endl;
		cout << "Roll No :... ";
		cin >> students[i].roll_no;
		cout << "Name :... ";
		cin >> students[i].name;
		cout << "Marks :... ";
		cin >> students[i].marks;
    }
    cout << "\nStudent Details : " << endl;
    for (int i = 0; i < 3; i++) {
		cout << "Roll No : " << students[i].roll_no << endl;
		cout << "Name : " << students[i].name << endl;
		cout << "Marks : " << students[i].marks << endl;
		cout << endl;
    }
    return 0;
}