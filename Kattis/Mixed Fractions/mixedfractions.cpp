#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int numerator;
	int denominator;
	
	cin >> numerator >> denominator;
	
	while (numerator || denominator){
		int returning = numerator%denominator;
		numerator-=returning;
		cout << numerator/denominator << " "
		<< returning << " / " << denominator << endl;
		cin >> numerator >> denominator;
		
	}
	
    return 0;
}
