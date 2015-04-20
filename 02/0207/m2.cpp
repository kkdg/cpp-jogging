#include <iostream>
using namespace std;

class Example2 {
    public:
	int total;
	Example2 (int initial_value):  total(initial_value) {};
	void accumulate (int x) { total += x; };
};

int main() 
{
	return 0;
}
