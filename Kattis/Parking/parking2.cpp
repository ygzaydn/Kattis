#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int number_of_test_cases,number_of_stores,output;
	output =0;
	cin >> number_of_test_cases;
	
	for (int i=0;i<number_of_test_cases;i++){
	
	cin >> number_of_stores;
	vector <int> position(number_of_stores);
	
	for (int i=0;i<number_of_stores;i++){
		cin >> position.at(i);
	}
	sort(position.begin(),position.end());
	for (int i=1;i<number_of_stores;i++){
		output+=position.at(i)-position.at(i-1);
	}
	output+=position.at(position.size()-1)-position.at(0);
	
	cout << output << endl;
	output=0;
	
	}
	
    return 0;
}
