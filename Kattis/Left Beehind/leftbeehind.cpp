#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int sweet_jars,sour_jars;
	cin >> sweet_jars >> sour_jars;
	
	while (sweet_jars || sour_jars){
		if ((sweet_jars+sour_jars)==13){
			cout << "Never speak again." << endl;
			cin >> sweet_jars >> sour_jars;
			continue;
		}
		if (sweet_jars>sour_jars)
			cout << "To the convention." << endl;
		else if (sweet_jars==sour_jars)
			cout << "Undecided." << endl;
		else if (sweet_jars<sour_jars)
			cout << "Left beehind." << endl;
		cin >> sweet_jars >> sour_jars;
	}
    return 0;
}
