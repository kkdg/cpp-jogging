#include <iostream>
using namespace std;

class MyClass {
	int x;
    public:
	MyClass(int val) : x(val) {}
	const int& get() const { return x; }
	int& get() { return x; }
};

void print (const MyClass& arg) {
	cout << arg.get() << endl;
}

int main() {
	MyClass foo(10);
	const MyClass bar(20);
	foo.get() = 15;
	//print(foo);
	cout << foo.get() << endl;
	cout << bar.get() << endl;

	return 0;
}
