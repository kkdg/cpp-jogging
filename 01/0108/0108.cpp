#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14159;
const char NL = '\n';

int main() 
{
	int a = 5;
	int b(3);
	int c{2};
	string d;
	
	cout << "Hi World\n";

	a = a + b;
	d = "This is a string\n";
	cout << d;
	return 0;
}
