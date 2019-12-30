#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
string missing_letter_finder(string input);

int main(int argc, char **argv)
{
    int number_of_cases;
	string cases;
	cin >> number_of_cases;
	cin.ignore();
	while (number_of_cases){
		
		getline(cin,cases);
		string output = missing_letter_finder(cases);
		cout << output << endl;
		number_of_cases--;
	}
	
    return 0;
}

string missing_letter_finder(string input){
	string out;
	int counter=0;
	for (int i=97;i<=122;i++){
		int pos = input.find(char(i));
		if (pos == -1){
			int big_letter = input.find(char(i-32));
			if (big_letter == -1){
				counter = 5;
				out.push_back(char(i));
			}
		}
	}
	if (counter==0)
		cout << "pangram";
	else
		cout << "missing ";
	return out;
}