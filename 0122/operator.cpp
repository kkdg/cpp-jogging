#include <iostream>
using namespace std;

class Cvector {
    public:
	int x,y;
	Cvector () {};
	Cvector (int a, int b) : x(a), y(b) {}
	Cvector operator + (const Cvector&);
};

Cvector Cvector::operator+ (const Cvector& param) {
	Cvector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;

	return temp;
}

int main () {
	Cvector foo (3,1);
	Cvector bar (1,2);
	Cvector result;
	result = foo + bar;
	cout << result.x << ',' << result.y << endl;

	return 0;
}
