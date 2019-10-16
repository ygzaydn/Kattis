#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int attempt[50];
    int miles[50];
    int hour[50];
    int total=0;

    for (int i=0;i<10;i++){

        scanf("%d",&attempt[i]);
        if (attempt[i]>0){
        for (int k=0;k<attempt[i];k++){
            scanf("%d %d",&miles[k],&hour[k]);
        }
        total = miles[0]*hour[0];
        for(int x=1;x<attempt[i];x++){
                total = total+(miles[x]*(hour[x]-hour[x-1]));
        }
        printf("%d miles\n",total);
    }
        if (attempt[i]==-1){
            break;
        }
    }

}


