#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
	int number_of_input;
	int number_of_days;
	int number_of_candles;
	int total_candles = 0;
	
	cin >> number_of_input;
	
	for (int i=0;i<number_of_input;i++){
		cin >> number_of_days >> number_of_candles;
		total_candles = number_of_candles*(number_of_candles+1)/2+(number_of_candles);
		cout << number_of_days << " " << total_candles << endl;
		total_candles = 0;
		
		
	}
    return 0;
}
