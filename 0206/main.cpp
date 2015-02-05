#include <iostream>
using namespace std;

int a,b,c;
double d;


double callx(int a,int b,int c) {
	return a+b+c;
}

int main() {
	d = callx(1,2,3);

	return d;
}

