#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	long long int input;
	cin >> input;
	
	long double edge = sqrt(input);
	long double output = 4*edge;
	
	cout << setprecision(9);
	cout << output;
	return 0;
}
