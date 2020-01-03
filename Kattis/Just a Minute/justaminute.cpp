#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int number_of_observations,total_minute=0;
	cin >> number_of_observations;
	double output = 0;
	cout.precision(10);
	while (number_of_observations--){
		int minute;
		double seconds;
		cin >> minute >> seconds;
		total_minute+=minute;
		output+=seconds;
		
	}
	output/=(60*total_minute);
	if (output<=1)
		cout << "measurement error";
	else 
		cout << output;
    return 0;
}
