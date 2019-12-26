#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int number_of_cases;
	double b,p;
	
	cin >> number_of_cases;
	
	while (number_of_cases){
		
		cin >> b >> p;
		
		double bpm = 60*b/p;
		double low_abpm = bpm - 60/p;
		double high_abpm = bpm + 60/p;
		
		cout << low_abpm << " " << bpm << " " << high_abpm << endl;
		number_of_cases--;
	}
    return 0;
}
