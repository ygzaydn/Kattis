#include <stdio.h>
#include <string.h>

int main(){

char word[101];

fgets(word,sizeof(word),stdin);
word[strlen(word)-1]='\0';

for(int i=0;i<strlen(word);i++){
    printf("%c",word[i]);

    if (word[i]=='a'||word[i]=='e'||word[i]=='i'||
        word[i]=='o'||word[i]=='u'){
        i+=2;
        }
}
return 0;
}
