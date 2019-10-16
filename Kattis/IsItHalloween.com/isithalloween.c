#include <stdio.h>

int main(){

    char month [10];
    int day;

    scanf("%s %d",month,&day);

    if (month[0]=='O' && day == 31 && month[1]=='C' && month[2]=='T'){
        printf("yup");
    }
    else if (month[0]=='D' && day == 25 && month[1]=='E' && month[2]=='C'){
        printf("yup");
    }
    else {
         printf("nope");
    }
}
