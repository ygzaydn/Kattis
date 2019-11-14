#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{

	double x1, y1, x2, y2, p;
	cin >> x1; 
	if (x1 == 0) return 0;
	cin >> y1 >> x2 >> y2 >> p;
	
	while (1){
		cout.precision(16);
		cout << (pow(pow(fabs(x1 - x2),p) 
		+ pow(fabs(y1 - y2),p),1.0/p)) << endl;
		
		cin >> x1;
		if (x1 == 0) break;
		cin >> y1 >> x2 >> y2 >> p;
	}
	
    return 0;
}
