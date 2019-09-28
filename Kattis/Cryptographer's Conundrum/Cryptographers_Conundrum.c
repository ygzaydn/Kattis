#include<stdio.h>
#include<string.h>

int main(){

char word[300];
scanf("%s",word);
int output=0;

int word_lenght=strlen(word);

for (int i=0;i<word_lenght;i++){
    if (i%3==0 && word[i]!='P'){
        output++;
    }
    else if (i%3==1 && word[i]!='E'){
        output++;
    }
    else if (i%3==2 && word[i]!='R'){
        output++;
    }
}
printf("%d",output);

}
