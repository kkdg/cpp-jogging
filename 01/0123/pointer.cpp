#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
    public:
	Rectangle(int x, int y) : width(x), height(y) {}
	int area(void) { return width * height; }
};

int main() {
	Rectangle obj(3,4);
	Rectangle * foo, * bar, * baz;
	foo = &obj;
	bar = new Rectangle (5,6);
	baz = new Rectangle [2] { {2,5}, {3,6} };
	cout << "obj's area: " << obj.area() << '\n';
	cout << "*foo's area: " << foo->area() << endl;
	cout << "*bar's area: " << bar->area() << endl;
	cout << "baz[0]'s area: " << baz[0].area() << endl;
	cout << "baz[1]'s area: " << baz[1].area() << endl;
	delete bar;
	delete[] baz;

	return 0;
}
