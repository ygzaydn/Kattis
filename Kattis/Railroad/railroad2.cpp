#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b;
	cin >> a >> b;
	
	if (b%2==0)
		cout << "possible";
	else
		cout << "impossible";
		
	return 0;
}
