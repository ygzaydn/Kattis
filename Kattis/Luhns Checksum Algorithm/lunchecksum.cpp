#include <iostream>
#include <string>

using namespace std;
int checksum_test(string number,int length);

int main(int argc, char **argv)
{
    int number_of_input;
	cin >> number_of_input;
	cin.ignore();
	
	while (number_of_input--){
		string number;
		getline(cin,number);
		int length_of_number=number.size()-1;
		int result = checksum_test(number,length_of_number);
		if (result%10==0)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
	}
}

int checksum_test(string number,int length){
	int output=0;
	for (int i=length-1;i>=0;i=i-2){
			int temp=(int(number[i])-48)*2;
			if (temp>=10){
				output+=(temp%10)+(temp/10)%10;
			}
			else{
				output+=temp;
			}
	}
	for (int i=length;i>=0;i=i-2){
		output+=(int(number[i])-48);
	}
return output;
}