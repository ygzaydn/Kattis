#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int i;
    int a = 0;

    scanf("%d\n",&x);
    char input[x][999];

    for(i=0;i<x;i++){
        scanf("%s",input[i]);

        for(int k=0;input[i][k+1];k++){
            if(input[i][k]=='C'&&input[i][k+1]=='D'){
                a++;
                break;
                }
    }
    }
    printf("%d",x-a);
    return 0;
}
