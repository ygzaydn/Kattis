#include<stdio.h>

main(){

    int number1,number2;

    scanf("%d %d",&number1,&number2);

    number_reverse(number1,number2);
}

void number_reverse(int number1, int number2){

    int a[2];
    int c[2];
    int b;
    int d;
    a[0]= (number1/100)%10;
    a[1]= (number1/10)%10;
    a[2]= number1%10;
    b = a[2]*100+a[1]*10+a[0];

    c[0]= (number2/100)%10;
    c[1]= (number2/10)%10;
    c[2]= number2%10;
    d = c[2]*100+c[1]*10+c[0];

    if (d>b){
        printf("%d",d);
    }
    else {
        printf("%d",b);
    }
}
