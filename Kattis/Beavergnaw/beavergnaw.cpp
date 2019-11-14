#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	long double D,V;
	long double d{0};
	cin >> D >> V;
	
	while (D || V) {
		
		d = cbrt(D*D*D - 6*V/M_PI);
		cout.precision(10);
		cout << d << endl;
		cin >> D >> V;
	}
	
	return 0;
}
