#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n,h,v;
	cin >> n >> h >> v;
	
	if (n>=2*h && n>=2*v)
		cout << (n-h)*(n-v)*4;
		
	if (n>=2*h && n<2*v)
		cout << (n-h)*v*4;
		
	if (n<2*h && n>=2*v)
		cout << h*(n-v)*4;
		
	if (n<2*h && n<2*v)
		cout << h*v*4;

    return 0;
}
