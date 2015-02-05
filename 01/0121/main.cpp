#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
	public :
	Rectangle ();
	Rectangle (int,int);
	int area() { return width*height; }
};

Rectangle::Rectangle () {
	width = 5;
	height = 5;
}

Rectangle::Rectangle (int x, int y) {
	width = x;
	height = y;
}

int main() {
	Rectangle rect(3,4), rectb(5,6), rectc; 
	cout << "area : " << rect.area() << endl;
	cout << "area : " << rectb.area() << endl;
	cout << "area : " << rectc.area() << endl;
	return 0;
}
