#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h> 
#include <algorithm> 

using namespace std;

int main(int argc, char **argv)
{
	int number_of_cases;
	cin >> number_of_cases;
	
	for (int i=0;i<number_of_cases;i++){
		int number_of_cities;
		cin >> number_of_cities; 
		vector<string>cities(number_of_cities);
		
		for (int i=0;i<number_of_cities;i++){
			cin >> cities[i];
		}
		
		sort(cities.begin(),cities.end());
		vector<string>::iterator it;
		it = unique (cities.begin(), cities.end());
		cities.resize(distance(cities.begin(),it));
		cout << cities.size() << endl;
		
	}
    
    return 0;
}
