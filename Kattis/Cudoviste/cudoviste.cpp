#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int row;
	int column;
	char control_array[4];
	int counter=0;
	int number_of_x=0;
	int number_of_square=0;
	
	cin >> row >> column;
	
	vector<string> input(row+1);
	vector<int> output(5);
	output.at(0)=output.at(1)=output.at(2)=output.at(3)=
	output.at(4)=0;
	
	for (int i=0;i<row;i++){
		cin >> input.at(i);
	}
	
	while (counter < row-1){
		for (int i=0;i<column-1;i++){
			control_array[0]=input.at(counter).at(i);
			control_array[1]=input.at(counter).at(i+1);
			control_array[2]=input.at(counter+1).at(i);
			control_array[3]=input.at(counter+1).at(i+1);
			for (int k=0;k<4;k++){
				if (control_array[k]=='#')
					number_of_square++;
				if (control_array[k]=='X')
					number_of_x++;
			}
			if (number_of_square==0){
				if (number_of_x==0)
					output.at(0)++;
				else if(number_of_x==1)
					output.at(1)++;
				else if(number_of_x==2)
					output.at(2)++;
				else if(number_of_x==3)
					output.at(3)++;
				else if(number_of_x==4)
					output.at(4)++;
			}
			number_of_square=0;
			number_of_x=0;
		}
	counter++;
	}
	
	cout << output.at(0) << endl;
	cout << output.at(1) << endl;
	cout << output.at(2) << endl;
	cout << output.at(3) << endl;
	cout << output.at(4) << endl;

    return 0;
}
