#include <iostream>
using namespace std;

class Box
{
	public:
		double length;
		double height;
		double breadth;
		void setLength( double len );
		void setHeight( double hei );
		void setBreadth( double bre );
		double getVolume(void)
		{
			return length * breadth * height;
		}

};

void Box::setLength( double len )
{
	length = len;
}

void Box::setHeight( double hei )
{
	height = hei;
}

void Box::setBreadth( double bre )
{
	breadth = bre;
}

int main()
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.setHeight( 5.0 );
	Box1.setLength( 6.0 );
	Box1.setBreadth( 7.0 );

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	volume = Box1.height * Box1.length * Box1.breadth;
	cout << "Volume of Box1 " << volume << endl;

	volume = Box2.getVolume();
	cout << "Volume of Box2 " << volume << endl;
	
	return 0;
}
