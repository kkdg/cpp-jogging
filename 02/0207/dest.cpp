#include <iostream>
#include <string>
using namespace std;

class Ex4 {
	string* ptr;
    public:
	Ex4() : ptr(new string) {}
	Ex4(const string& str) : ptr(new string(str)) {}
	~Ex4() { delete ptr; }
	const string& content() const { return *ptr; }
};

int main() 
{
	Ex4 foo;
	Ex4 bar("Example");

	cout << "bar's content: " << bar.content() << "\n";
	return 0;
}
