#include<stdio.h>

main (){

    int mb,month;

    scanf("%d",&mb);
    scanf("%d",&month);

    int usage[100];
    int total_usage=0;

    for(int i=0;i<month;i++){
        scanf("%d",&usage[i]);
        total_usage=usage[i]+total_usage;
    }
    int output = (mb*(month+1))-total_usage;
    printf("%d",output);
    return 0;

}


