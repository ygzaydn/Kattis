#include <iostream>
#include <string>

using namespace std;

void digitcounter(string a);

int main(int argc, char **argv)
{
	int number_of_inputs;
	string number;
	cin >> number_of_inputs;
	
	
	for (int i=0;i<number_of_inputs;i++){
		cin >> number;
		digitcounter(number);
	}
    return 0;
}

void digitcounter(string a){

	cout << a.length() << endl;
}