#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main(int argc, char **argv)
{
	vector<int> input(10);
	vector<int>::iterator ip; 
	
	for(int i=0;i<10;i++){
		cin >> input.at(i);
		input.at(i)%=42;
	}
	
	sort(input.begin(), input.end());
	ip = unique(input.begin(),input.begin()+10);
	input.resize(distance(input.begin(), ip));
	
	cout << input.size();
	
	return 0;
}
