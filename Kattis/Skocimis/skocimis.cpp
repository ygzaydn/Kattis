#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c;
	int output;
	cin >> a >> b >> c;
	
	if ((b-a) > (c-b)){
		output = b-a-1;
		cout << output;
	}
	else if ((c-b) >= (b-a)){
		output = c-b-1;
		cout << output;
	}
	return 0;
}
