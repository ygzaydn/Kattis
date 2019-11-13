#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	int number_of_person;
	cin >> number_of_person;
	
	vector <int>input(number_of_person);
	vector <int>output(number_of_person);
	int counter{1};
	output.at(0)=1;
		
	for (int i=1;i<number_of_person;i++){
		cin >> input.at(i);
	}
	
	while(counter<number_of_person){
		output.at(1+input.at(counter))=counter+1;
		counter++;
		}
	
	cout << output.at(0);
	for (int i=1;i<number_of_person;i++){
		cout << " " << output.at(i);
	}
	
	return 0;
}
