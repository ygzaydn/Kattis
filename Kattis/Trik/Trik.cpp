#include<stdio.h>
#include<string.h>

int main(){

char movement[50];
int output=1;
int movement_length=0;
scanf("%s",movement);

movement_length=strlen(movement);

for(int i=0;i<movement_length;i++){

/*Switch to A-B*/
    if(output==1 && movement[i]=='A'){
        output=2;}

/*Switch to B-C*/
    else if(output==2 && movement[i]=='B'){
        output=3;}

/*Switch to C-A*/
    else if(output==3 && movement[i]=='C'){
        output=1;}

/*Switch to B-A*/
    else if(output==2 && movement[i]=='A'){
        output=1;}

/*Switch to C-B*/
    else if(output==3 && movement[i]=='B'){
        output=2;}

/*Switch to A-C*/
    else if(output==1 && movement[i]=='C'){
        output=3;}

}

printf("%d",output);

return 0;
}

