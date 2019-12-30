#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int r,c;
	cin >> r >> c;
	cout.precision(10);
	double output = double((r-c)*(r-c))/(r*r);
	output *=100;
	cout << output;
    return 0;
}
