#include <iostream>

using namespace std;

int trumpset(char c){
	switch (c) {
		case 'A':
			return 11;
		case 'K':
			return 4;
		case 'Q':
			return 3;
		case 'J':
			return 20;
		case 'T':
			return 10;
		case '9':
			return 14;
		default:
			return 0;
	}
}

int normalset(char c){
	switch (c){
		case 'A':
			return 11;
		case 'K':
			return 4;
		case 'Q':
			return 3;
		case 'J':
			return 2;
		case 'T':
			return 10;
		default:
			return 0;
	}
	return 0;
}

int main(int argc, char **argv){
	
	int hand;
	char suit,value_of_card,suit_of_card;
	int total_score=0;
	int counter=0;
	
	cin >> hand >> suit;
	
	while(counter<4*hand){
		cin >> value_of_card >> suit_of_card;
		if (suit_of_card == suit)
			total_score+=trumpset(value_of_card);
		else
			total_score+=normalset(value_of_card);
	counter++;
	}
	
	cout << total_score;
    return 0;
}
