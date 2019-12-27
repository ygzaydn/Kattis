#include <iostream>

using namespace std;
double probability_calculator(double &a1,double &b1,double &a2,double &b2);

int main(int argc, char **argv)
{
	double a1,b1,a2,b2;
	double a3,b3,a4,b4;
	double emma,gunnar;
	cin >> a1 >> b1 >> a2 >> b2;
	cin >> a3 >> b3 >> a4 >> b4;
	
	gunnar = probability_calculator(a1,b1,a2,b2);
	emma = probability_calculator(a3,b3,a4,b4);
	
	if (gunnar<emma)
		cout << "Emma";
	else if (gunnar>emma)
		cout << "Gunnar";
	else if (gunnar=emma)
		cout << "Tie";
	
	return 0;
}

double probability_calculator(double &a1,double &b1,double &a2,double &b2){
	double first_dice_total=(b1*(b1+1)/2)-(a1*(a1-1)/2);
	double second_dice_total=(b2*(b2+1)/2)-(a2*(a2-1)/2);
	return (first_dice_total/(b1-a1+1))+(second_dice_total/(b2-a2+1));
}