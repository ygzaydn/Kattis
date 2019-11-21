#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n=0;
	cin >> n;
	
	if (n==1 || n==3 || n==5 || n==7 || n==9 )
		cout << "Either";
	else if (n==2 || n==6 || n==10)
		cout << "Odd";
	else
		cout << "Even";
	
    return 0;
}


