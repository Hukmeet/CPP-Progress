#include <iostream>
using namespace std;
struct Rectangle {
	int length;
	int width;
};
void print_area(Rectangle rect);
int main() {
	Rectangle r;
	cout<<"Program to passing structure as an argument in a function : "<<endl;
	cout << "Enter the length of the rectangle :... ";
	cin >> r.length;
	cout << "Enter the width of the rectangle :... ";
	cin >> r.width;
	print_area(r);
	return 0;
}
void print_area(Rectangle rect) {
	int area = rect.length * rect.width;
	cout << "Area of the rectangle is : " << area << endl;
}