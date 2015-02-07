#include <iostream>
using namespace std;

template <class T>
class myContainer
{
	T element;
    public:
	myContainer(T arg) { element = arg; }
	T increase() { return ++element; }
};

template <>
class myContainer <char>
{
	char element;
    public:
	myContainer (char arg) { element = arg; }
	char uppercase()
	{
		if ((element>='a')&&(element<='z'))
			element+='A'-'a';
		return element;
	}
};

int main() {
	myContainer<int> myInt(7);
	myContainer<char> myChar('j');
	cout << myInt.increase() << endl;
	cout << myChar.uppercase() << endl;
	return 0;
}
