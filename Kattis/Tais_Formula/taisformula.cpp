#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int number_of_samples;
	cin >> number_of_samples;
	double time[number_of_samples];
	double sample[number_of_samples];
	double output=0;
	
	for (int i=0;i<number_of_samples;i++){
		cin >> time[i] >> sample[i];
	}
	
	for (int i=0;i<number_of_samples-1;i++){
		output+=(time[i+1]-time[i])*(sample[i+1]+sample[i])/2;
	}
	
	cout.precision(8);
	cout << output/1000;
	
    return 0;
}
