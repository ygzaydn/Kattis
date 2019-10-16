
#include <stdio.h>

int main (){

    float cost_of_lawns;
    float number_of_lawns;

    scanf ("%f",&cost_of_lawns);
    scanf ("%f",&number_of_lawns);

    float areax[150];
    float areay[150];

    float output=0;

    for(int i=0;i<number_of_lawns;i++){
    scanf("%f %f",&areax[i],&areay[i]);
    }

    for(int k=0;k<number_of_lawns;k++){
    output = output + areax[k]*areay[k];
    }
    output = output*cost_of_lawns;
    printf("%f",output);

}


