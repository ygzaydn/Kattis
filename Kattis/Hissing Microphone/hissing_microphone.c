#include <stdio.h>
#include <stdlib.h>

int main (){

    /*Inputs*/
    char input[29];
    int i=0;
    int l=0;
    scanf("%s",input);
    
    while(input[i]!=0){
    i++;
    }

    for(int k=0;input[k];k++){
        if(input[k]==input[k+1]&&input[k]=='s'){
            printf("hiss");
            break;
        }
        else {
            l++;
        }
    }
    if(l==i){
        printf("no hiss");
    }
}
    
    


