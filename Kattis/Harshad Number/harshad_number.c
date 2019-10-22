#include <stdio.h>

int digit_calculator (int);
int main(int argc, char**argv){

int number;
scanf("%d",&number);
int digits_of_number;
digits_of_number = digit_calculator(number);


    while (number){
        if(!(number%digits_of_number)){
        printf("%d",number);
        break;
        }
    number++;
    digits_of_number = digit_calculator(number);
    }

return 0;
}

int digit_calculator(int i){
	int result=0;
	while (i){
		result+=i%10;
		i/=10;
	}
	return result;
}
