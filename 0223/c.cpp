#include <iostream>
#include <unistd.h>
//#include <tbb/task_scheduler_init.h>

using namespace std;

int main() 
{
	cout << "Hi, world" << endl;
	unsigned int i;
	unsigned int microseconds = 100;
	while( true )
	{
		cout << "oops";	
		usleep(microseconds);
	}
	return 0;
}
