#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main(int argc, char **argv)
{
    string input;
	getline(cin,input);
	
	vector <string> words;
	int k=0;
	
	while (1){
		int temp = input.find(' ',0);
		words.push_back(input.substr(0,temp));
		int b = input.find(' ',0) ;
		if (b==-1){
			break;
		}
		input = input.substr(temp+1,input.length()-temp+1);
	}
	
	sort (words.begin(),words.end());
	
	for(size_t i=1;i<words.size();i++){
		if (words[i]==words[i-1]){
			cout << "no";
			k=5;
			break;
		}
	}
	
	if(k!=5){
		cout << "yes";
	}
	
    return 0;
}
