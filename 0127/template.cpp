#include <iostream>

template <class T>

class myPair {
	T values [2];
    public:
	myPair (T first, T second)
	{
		values[0]=first;
		values[1]=second;
	}
};
