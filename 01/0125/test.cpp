#include <iostream>
using namespace std;

class A {
    public:
	A( int x ) : n(x) {}
	void print() { cout << n << endl; }
    private:
	int n;
};

void func( A p ){
	p.print();
}

int main() {
	A a(1);
	func(a);
}
