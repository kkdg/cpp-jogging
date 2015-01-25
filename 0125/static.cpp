#include <iostream>
using namespace std;

class Dummy {
    public:
	static int n;
	Dummy();
	~Dummy () { n--; };
};

Dummy::Dummy() { n++; }
int Dummy::n=0;

int main() {
	Dummy a;
	Dummy b[5];
	Dummy * c = new Dummy;
	cout << a.n << endl;
	delete c;
	cout << Dummy::n << endl;

	return 0;
}
