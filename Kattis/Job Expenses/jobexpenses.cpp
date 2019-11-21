#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int number_of_cases;	
	cin >> number_of_cases;
	int data[number_of_cases];
	int output=0;
	
	for (int i=0;i<number_of_cases;i++){
		cin >> data[i];
		if (data[i]<0){
			output+=data[i];
		}
	}
	
	cout << output*-1;
	
    return 0;
}
