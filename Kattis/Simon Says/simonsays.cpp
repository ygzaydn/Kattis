#include <iostream>
#include <string>
#include <cstring> 

using namespace std;

int main(int argc, char **argv)
{
	int number_of_inputs;
	cin >> number_of_inputs;
	
	string string_input;
	string compare {"Simon says "};
	cin.ignore();
	
	for (int i=0;i<number_of_inputs;i++){
		
		getline(cin,string_input);
		if (string_input.substr(0,11)==compare){
			cout << string_input.substr(11,string_input.length()-11) << endl;
		}
	}
	return 0;
}
