#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

int n;
int p=11;

while (scanf("%d",&n)){
    int digits_of_n=digit_calculator(n);
    while(p){
    int intermediate=p*n;
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
