#include <iostream>
#include <math.h>
#include <vector>

using namespace	std;

int main(int argc, char **argv)
{
	int i=0;
	vector<int>output_first;
	long int number;
	cin >> number;
	while (number){
		int temp=number%2;
		output_first.push_back(temp);
		number/=2;
		i++;
	}
	long int output=0;
	for(int i=0;i<output_first.size();i++){
		output+=output_first.at(i)*pow(2,output_first.size()-i-1);
	}
	
	cout << output << endl;
    return 0;
}