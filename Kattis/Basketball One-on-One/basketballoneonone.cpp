#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, char **argv)
{
    int a{0};
	int b{0}; 
	char scoreboard[201];
	int counter {0};
	
	cin.getline(scoreboard,201);
	
	while (scoreboard[counter]!='\n'){
		if(a==11 && b<10){
			cout << "A";
			return 0;
		}
		
		if(b==11 && a<10){
			cout << "B";
			return 0;
		}
		if (a>=10 && b >=10){
			if (a>=b+2){
				cout << "A";
				return 0;
			}
			if (b>=a+2){
				cout << "B";
				return 0;
			}
		}
		if (scoreboard[counter]=='A'){
			a+=scoreboard[counter+1]-'0';
		}
		else if (scoreboard[counter]=='B'){
		b+=scoreboard[counter+1]-'0';
		}
		
		counter++;
	}
		if(a==11 && b<10){
			cout << "A";
			return 0;
		}
		
		if(b==11 && a<10){
			cout << "B";
			return 0;
		}
		if (a>=10 && b >=10){
			if (a>=b+2){
				cout << "A";
				return 0;
			}
			if (b>=a+2){
				cout << "B";
				return 0;
			}
		}

    return 0;
}
