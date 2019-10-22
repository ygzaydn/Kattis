#include <stdio.h>
#include <math.h>
#include <string.h>

int comparator (int a,int b){
	if (a>b){return a;}
	else if (a<b){return b;}
	else {return a;}
}

int main(int argc, char **argv)
{
	int number_of_inputs;
	scanf("%d",&number_of_inputs);
	int temps[number_of_inputs];
	int tmp,counter;
	
	
	for (int i=0;i<number_of_inputs;i++){
		scanf("%d",&temps[i]);
	}
	
	tmp=50;
	counter=0;
	
	for (int i=0;i<number_of_inputs-2;i++){
		if (tmp>comparator(temps[i],temps[i+2])){
			tmp=comparator(temps[i],temps[i+2]);
			counter = i;
		}
	}
	
	printf("%d %d",counter+1,comparator(temps[counter],
	temps[counter+2]));
	
	
return 0;
}
