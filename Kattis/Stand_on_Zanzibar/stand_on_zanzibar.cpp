#include <stdio.h>
#include <string.h>

int array_lenght(int input[]){
    int l=0;
    while(input[l]!=0){
    l++;}
return l;}

int main(){

int number_of_test_cases;

scanf("%d",&number_of_test_cases);

int number_of_turtles[999];
int dummy=0;
int output=0;
int lenght=0;

for(int i=0;i<number_of_test_cases;i++){

    while (1){
    scanf("%d",&number_of_turtles[dummy]);
        if(number_of_turtles[dummy]==0){
        break;}
        dummy++;}

lenght=array_lenght(number_of_turtles);

for (int k=0;k<lenght-1;k++){
        if(2*number_of_turtles[k]<number_of_turtles[k+1]){
        output+=number_of_turtles[k+1]-(2*number_of_turtles[k]);
        }
    }

printf("%d\n",output);
output = 0;
dummy = 0;
}
return 0;
}


