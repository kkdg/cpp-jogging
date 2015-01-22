#include <iostream>
using namespace std;

class Dummy {
    public:
	bool isItMe ( Dummy& param );
};

bool Dummy::isItMe ( Dummy& param )
{
	if ( &param == this ) return true;
	else return false;
}

int main() {
	Dummy a;
	Dummy* b = &a;
	if( b->isItMe(a) )
		cout << "yes, &a is b" << endl;
	return 0;
}
