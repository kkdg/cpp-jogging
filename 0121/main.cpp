#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
	public :
	Rectangle (int,int);
	int area() { return width*height; }
};

Rectangle::Rectangle (int x, int y) {
	width = x;
	height = y;
}

int main() {
	Rectangle rect(3,4), rectb(5,6); 
	cout << "area : " << rect.area() << endl;
	cout << "area : " << rectb.area() << endl;
	return 0;
}
