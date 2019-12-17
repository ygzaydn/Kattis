#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int number_of_cases;
	int number_of_numbers;
	int counter=0;
	int case_number=1;
	
	cin >> number_of_cases;
	
	while (number_of_cases){
		cin >> number_of_numbers;
		int numbers[number_of_numbers];
		
		for (int i=0;i<number_of_numbers;i++){
			cin >> numbers[i];
		}
		
		for (int i=0;i<number_of_numbers;i++){
			for (int j=0;j<number_of_numbers;j++){
				if (numbers[i]!=numbers[j]){
					counter++;
				}
			}
			if (counter==number_of_numbers-1){
				cout << "Case #" << case_number << ": " << numbers[i] << endl;
				case_number++;
			}
			counter = 0;
		}
		
		number_of_cases--;
	}
    return 0;
}
