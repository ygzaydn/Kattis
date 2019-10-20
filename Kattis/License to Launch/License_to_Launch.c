#include <stdio.h>

int main(){

int number_of_days;
scanf("%d",&number_of_days);
int days[number_of_days];

for (int i=0;i<number_of_days;i++){
    scanf("%d",&days[i]);
}
int minimum = days[0];

for (int k=1;k<number_of_days;k++){

    if(days[k]<minimum){
        minimum=days[k];
    }
}

for (int i=0;i<number_of_days;i++){
    if(days[i]==minimum){
        printf("%d",i);
        break;
    }
}

return 0;
}
