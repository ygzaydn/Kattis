#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{

	double radius;
	cin >> radius;
	
	cout.precision(16);
	
	cout << radius*radius*M_PI << endl;
	cout << 4.0*(radius*radius)/2.0 << endl;
	
	
	return 0;
}
