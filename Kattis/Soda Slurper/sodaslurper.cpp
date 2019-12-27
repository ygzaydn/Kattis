#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int e,f,c;
	cin >> e >> f >> c;
	int empty = e+f;
	int total = 0;
	while (empty >= c){
		empty-=c;
		total++;
		empty++;
	}
	
	cout << total;

	return 0;
}
