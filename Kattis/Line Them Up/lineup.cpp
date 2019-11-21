#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int number_of_cases;
	cin >> number_of_cases;
	vector<string>names(number_of_cases);
	
	int counter_up=0;
	int counter_down=0;
	
	for (int k=0;k<number_of_cases;k++){
		cin >> names.at(k);
	}
	
	for (int i=0;i<number_of_cases-1;i++){
		if (names[i]<(names[i+1])){
			counter_up++;
		}
		if (names[i]>(names[i+1])){
			counter_down++;
		}
	}
	
	if (counter_down==number_of_cases-1)
		cout << "DECREASING";
	else if (counter_up==number_of_cases-1)
		cout << "INCREASING";
	else 
		cout << "NEITHER";
    return 0;
}
