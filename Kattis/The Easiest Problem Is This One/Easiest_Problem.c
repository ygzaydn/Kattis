#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

int n[5000000];
int i=0;
int a=1;
int p=11;

while(a){
scanf("%d",&n[i]);
if(n[i]<=0){
    break;}
i++;}

for (int k=0;k<i;k++){
    int digits_of_n=digit_calculator(n[k]);
    while(p){
    int intermediate=p*n[k];
    if(digit_calculator(intermediate)==digits_of_n){
        printf("%d\n",p);
        p=11;
        break;}
        p++;
        }}
return 0;

}
int digit_calculator(int x){
int output=0;

while (x){
    output+=(x%10);
    x/=10;
}
return output;
}
