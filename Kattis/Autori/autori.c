#include <stdio.h>

int main (){

    /*input declarations*/
    char input[100];
    char a;
    char b = '-';
    int x;  

    scanf("%s",input);
    printf("%c",input[0]);


    for(int i=0;i<99;i=i+1) {
        if(input[i]==b) {
        x = input[i+1];
        a = '0'+x-'0';
        printf("%c",a);
        }
    }

    return 0;
}


