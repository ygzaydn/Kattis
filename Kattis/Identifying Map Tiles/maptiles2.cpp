#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	string input;
	cin >> input;
	int x=0;
	int y=0;
	
	for(size_t i=0;i<input.length();i++){

		if(input.at(i)=='1'){
			x+=pow(2,(input.length()-1-i));
		}
		else if(input.at(i)=='2'){
			y+=pow(2,(input.length()-1-i));
		}
		else if(input.at(i)=='3'){
			
			x+=pow(2,(input.length()-1-i));
			y+=pow(2,(input.length()-1-i));
		}
	}
	
	cout << input.length() << " " << x << " " << y;
	
return 0;
}
