#include <iostream>
using namespace std;

class MyClass {
    public:
	int x;
	MyClass(int val) : x(val) {}
	int get() { return x; }
};

int main() {
	const MyClass foo(10);
	cout << foo.x << endl;
	
	return 0;
}
