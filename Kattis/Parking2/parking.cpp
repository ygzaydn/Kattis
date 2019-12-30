#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int price[4];
	price[0]=0;
	int arrive[3];
	int departure[3];
	
	for (int i=1;i<4;i++){
		cin >> price[i];
	}
	for (int i=0;i<3;i++){
		cin >> arrive[i] >> departure[i];
	}
	int output=0;
	for (int i=1;i<=100;i++){
		int number_of_cars=0;
		for (int j=0;j<3;j++){
			if(i>=arrive[j] && i < departure[j]){
				number_of_cars++;
			}
		}
	output += price[number_of_cars]*number_of_cars;
	}
	
	cout << output;
	
	
    return 0;
}
