#include <stdio.h>

main(){
    /*Inputs*/
    int X,Y,N;
    scanf("%d %d %d",&X,&Y,&N);


    /*Logic*/
    for (int i=1;i<=N;i++){

        if(i%X==0 && i%Y!=0){
            printf("Fizz");
        }
        else if(i%X!=0 && i%Y==0){
            printf("Buzz");
        }
        else if(i%X==0 && i%Y==0){
            printf("FizzBuzz");
        }
        else {
            printf("%d",i);
        }
        printf("\n");
    }
return 0;
}


