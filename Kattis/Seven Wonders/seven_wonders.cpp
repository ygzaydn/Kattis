#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

char cards[50];
int number_of_t=0;
int number_of_c=0;
int number_of_g=0;
int unique_array=0;
int lenght_of_cards=0;
int output=0;

scanf("%s",cards);

lenght_of_cards = strlen(cards);

for(int i=0;i<lenght_of_cards;i++){
    if (cards[i]=='T'){
    number_of_t=number_of_t+1;
    }
    if (cards[i]=='C'){
    number_of_c=number_of_c+1;
    }
    if (cards[i]=='G'){
    number_of_g=number_of_g+1;
    }
}
if (number_of_c!=0 && number_of_g!= 0 && number_of_t !=0){
    if(number_of_c<=number_of_g && number_of_c<=number_of_t){
    unique_array=number_of_c;}
    else if(number_of_t<=number_of_g && number_of_t<=number_of_c){
    unique_array=number_of_t;}
    else if(number_of_g<=number_of_c && number_of_g<=number_of_t){
    unique_array=number_of_g;}
}

output=(number_of_c*number_of_c)+(number_of_g*number_of_g)+(number_of_t*number_of_t)+unique_array*7;
printf("%d",output);



return 0;
}
