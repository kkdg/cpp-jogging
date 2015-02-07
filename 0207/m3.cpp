#include <iostream>
#include <string>
using namespace std;

class Ex3 {
	string data;
    public:
	Ex3 (const string& str) : data(str) {}
	Ex3() {}
	const string& content() const { return data; }
};

int main() 
{
	Ex3 foo;
	Ex3 bar("Example");
	
	cout << "bar's content: " << bar.content() << endl;

	return 0;
}


