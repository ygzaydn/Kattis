#include<stdio.h>

main (){

 int input_no;
 scanf("%d",&input_no);
 int positive=0;
 int total=0;

 int inputs[100];

 for(int i=0;i<input_no;i++){
    scanf("%d",&inputs[i]);
 }
 for (int k=0;k<input_no;k++){
    if(inputs[k]>=0){
    total=inputs[k]+total;
    positive++;
    }
 }
    float result = (float) total/positive;
    printf("%7f",result);
}
