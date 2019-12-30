#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void sort_algorithm(vector<int> &input);
void print(vector <int> second_input);

int main(int argc, char **argv)
{
	int temp;
    vector <int> number;
	for (int i=0;i<5;i++){
		
		cin >> temp;
		number.push_back(temp);
	}
	vector <int> sorted_number = number;
	sort(sorted_number.begin(), sorted_number.end());
	while (sorted_number!=number){
		sort_algorithm(number);
	}
	
	cout << endl;
    return 0;
}

void sort_algorithm(vector<int> &input){
	int temp;
	if (input.at(0)>input.at(1)){
		temp = input.at(0);
		input.at(0) = input.at(1);
		input.at(1) = temp;
		print(input);
	}
	if (input.at(1)>input.at(2)){
		temp = input.at(1);
		input.at(1) = input.at(2);
		input.at(2) = temp;
		print(input);
	}
	if (input.at(2)>input.at(3)){
		temp = input.at(2);
		input.at(2) = input.at(3);
		input.at(3) = temp;
		print(input);
	}
	if (input.at(3)>input.at(4)){
		temp = input.at(3);
		input.at(3) = input.at(4);
		input.at(4) = temp;
		print(input);
	}

}
void print(vector <int> second_input){
		for(int i = 0; i < 5; i++) {
		cout << second_input.at(i) << " ";
    }
		cout << endl;
}
