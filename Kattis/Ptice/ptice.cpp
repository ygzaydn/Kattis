#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector <char>Adrian {'A','B','C'};
	vector <char>Bruno {'B','A','B','C'};
	vector <char>Goran {'C','C','A','A','B','B'};
	vector <string>input;
	string data;
	int adrian=0;
	int bruno=0;
	int goran=0;
	int size=0;
	cin >> size;
	cin >> data;
	input.push_back(data);
	
	for (int i=0;i<size;i++){
		if(input.at(0).at(i)==Adrian.at(i%3)){
			adrian++;
		}
		}
	for (int i=0;i<size;i++){
		if(input.at(0).at(i)==Bruno.at(i%4)){
			bruno++;
		}
		}

	for (int i=0;i<size;i++){
		if(input.at(0).at(i)==Goran.at(i%6)){
			goran++;
		}
		}

	if (goran > adrian && goran > bruno){cout << goran << endl << "Goran";}
	if (adrian > goran && adrian > bruno){cout << adrian << endl << "Adrian";}
	if (bruno > adrian && bruno > goran){cout << bruno << endl << "Bruno";}
	if (goran > adrian && goran == bruno){cout << goran << endl << "Bruno\n" << "Goran";}
	if (goran == adrian && goran > bruno){cout << goran << endl << "Adrian\n" << "Goran";}
	if (bruno == adrian && bruno > goran){cout << bruno << endl << "Adrian\n" << "Bruno";}
	if (bruno == adrian && bruno == goran){cout << bruno << endl << "Adrian\n" << "Bruno\n" << "Goran";}
	
	return 0;
}
