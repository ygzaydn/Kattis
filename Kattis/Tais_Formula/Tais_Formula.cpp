#include <stdio.h>


int main(){

int number_of_samples;
scanf("%d",&number_of_samples);

float samples_1[number_of_samples],samples_2[number_of_samples],output=0;

for (int i=0;i<number_of_samples;i++){
scanf("%f %f",&samples_1[i],&samples_2[i]);
}

for (int k=0;k<number_of_samples-1;k++){
output+=(((samples_2[k]+samples_2[k+1])/2)*(samples_1[k+1]-samples_1[k]))/1000;
}

printf("%f",output);

return 0;
}
