#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void turn_calculator(vector<int> &input);

int main(int argc, char **argv)
{
    int number_of_ring;
	cin >> number_of_ring;
	vector <int> rings(number_of_ring);
	for (int i=0;i<number_of_ring;i++){
		cin >> rings.at(i);
	}
	turn_calculator(rings);
	
    return 0;
}

void turn_calculator(vector<int> &input){
	for (size_t i=1;i<input.size();i++){
		if(input.at(0)%input.at(i)==0){
			cout << input.at(0)/input.at(i) << "/" << 1 << endl;
		}
		else{
			cout << input.at(0)/__gcd(input.at(0),input.at(i)) << "/" << 
			input.at(i)/__gcd(input.at(0),input.at(i)) << endl;
		}
		
	}
}