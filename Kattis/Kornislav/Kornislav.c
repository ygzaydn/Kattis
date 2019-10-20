#include <stdio.h>

int main(){

int metric[4];
for (int i=0;i<4;i++){
    scanf("%d",&metric[i]);
}

int temp = 0;
int height, lenght;

for (int i=0; i<4;i++){

    for (int j=0; j<4;j++){
        if(metric[j] > metric[i]){
            temp = metric[i];
            metric[i]= metric[j];
            metric[j] = temp;
        }
    }

}

int output=0;
height = metric[0];
lenght = metric[2];

output = height*lenght;
printf("%d",output);

return 0;
}
