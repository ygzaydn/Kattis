#include <stdio.h>
#include <math.h>

int main(){

int number_of_inputs;
scanf("%d",&number_of_inputs);

int base;
unsigned int decimal_integer;
int set_number;
int dummy=0;
int a[55];
int output[number_of_inputs];
int output_counter=0;


for (int i=0;i<number_of_inputs;i++){
output[i]=0;
scanf("%d %d %u",&set_number,&base,&decimal_integer);

unsigned int dummy_decimal_integer=decimal_integer;

    while(dummy_decimal_integer){
    a[dummy]=dummy_decimal_integer%base;
    dummy_decimal_integer/=base;
    dummy++;
    }

for (int k=0;k<dummy;k++){
output[i]+=pow(a[k],2);
}
printf("%d %d\n",(i+1),output[i]);
dummy=0;
}

return 0;
}
