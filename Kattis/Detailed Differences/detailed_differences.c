#include <stdio.h>
#include <string.h>

int main (){

int test_cases;
char first_word[51];
char second_word[51];
int string_lenght;

scanf("%d",&test_cases);

for(int i=0;i<test_cases;i++){
scanf("%s",first_word);
scanf("%s",second_word);
string_lenght = strlen(first_word);
printf("%s\n",first_word);
printf("%s\n",second_word);
    for(int k=0;k<string_lenght;k++){
        if (first_word[k]==second_word[k]){
        printf(".");
        }
        else if (first_word[k]!=second_word[k]){
        printf("*");
        }
    }
printf("\n");
}


return 0;
}


