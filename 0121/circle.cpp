#include <iostream>

using namespace std;

class Circle {
	double radius;
    public:
	Circle(double r) { radius = r; }
	double circum() { return 2*radius*3.14159265;}
};

int main() {
	Circle foo ( 10.0 );
	Circle bar = 20.0;
	Circle baz { 30.0 };
	Circle qux = { 40.0 };

	cout << "foo's circumference : " << foo.circum() << '\n';
	cout << "bar's circumference : " << bar.circum() << '\n';
	cout << "baz's circumference : " << baz.circum() << '\n';
	cout << "qux's circumference : " << qux.circum() << '\n';
}
