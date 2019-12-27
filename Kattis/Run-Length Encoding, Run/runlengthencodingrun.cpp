#include <iostream>
#include <string>
#include <vector>

using namespace std;

void encoder(string &input);
void decoder(string &input);
int main(int argc, char **argv)
{
    char identifier;
	string input;
	string output;
	
	cin >> identifier >> input;

	switch (identifier){
		case 'E':
		encoder(input);
		break;
		case 'D':
		decoder(input);
		cout << output;
		break;
	}
    return 0;
}

void encoder(string &input){
	
	cout << input[0];
	size_t i=1;
	int counter=1;
	
	while (i<input.length()+1){
		
		if(input[i]==input[i-1])
			counter++;
		else{
			cout << counter;
			counter = 1;
			cout << input[i];
		}
	i++;
	}
}

void decoder(string &input){
	size_t i =0;
	while (i<input.length()){
		int number = (int)input[i+1]-48;
		for (int k=0;k<number;k++){
			cout << input[i];
		}
	i+=2;
	number = 0;
	}

}
