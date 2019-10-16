#include<stdio.h>

main(){

    int input_no;
    scanf("%d",&input_no);
    int inputs[10];
    for (int i=0;i<input_no;i++){
        scanf("%d",&inputs[i]);
        inputs[i]=factorial(inputs[i]);
        inputs[i]=
lfd(inputs[i]);
    }

    for (int x=0;x<input_no;x++){
        printf("%d\n",inputs[x]);
    }
}
int factorial(int input){
    int fact=1;
        for(int c=1;c<=input;c++){
            fact=fact*c;}
    input=fact;
    return input;
}
int lfd(int inputx){
        if(inputx>=10){
            inputx=inputx%10;
        }
    return inputx;
}


