#include <stdio.h>
#include<string.h>

int main(){

    int limit;
    int event;

    scanf ("%d %d",&limit,&event);

    char situation[event][10];
    int groups[1000];
    int a=0;
    int output=0;

    for (int i=0;i<event;i++){
        scanf(("%s %d"),situation[i],&groups[i]);
    }

    for (int k=0;k<event;k++){
        if (strcmp(situation[k],"enter")==0){
            a=a+groups[k];
            if (a>limit){
                a=a-groups[k];
                output=output+1;
            }
        }
        else if (strcmp(situation[k],"leave")==0){
            a=a-groups[k];
        }
    }
    printf("%d\n",output);
}


