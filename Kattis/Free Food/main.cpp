#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> days;
	vector<int>::iterator ip;
	int number_of_cases;
	int output {};
	cin >> number_of_cases;
	
	for (int i=0;i<number_of_cases;i++){
		int first_day,end_day;
		cin >> first_day >> end_day;
		for (int i=first_day;i<=end_day;i++){
			days.push_back(i);
		}
	}
	
	sort(days.begin(), days.end());
	ip = unique(days.begin(),days.end());
	days.resize(distance(days.begin(), ip));
	
	cout << days.size();

	return 0;
}
