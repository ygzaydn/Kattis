#include<stdio.h>

main(){

    int cases;
    int advertise[999][10];
    scanf("%d",&cases);
    int a=cases;

    for (int i=0;i<a;i++){
        scanf("%d %d %d",&advertise[i][0],&advertise[i][1],&advertise[i][2]);
    }
    for (int k=0;k<a;k++){
            int a=advertise[k][1]-advertise[k][2];
            int c=advertise[k][0];
        if (a>c){
            printf("advertise\n");
            }
        else if(a==c){
            printf("does not matter\n");
            }
        else if(a<c){
            printf("do not advertise\n");
        }
    }
}


