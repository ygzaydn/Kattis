#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

int l,d,x;
scanf("%d",&l);
scanf("%d",&d);
scanf("%d",&x);

int digits_of_l=0;
int digits_of_d=0;

for (int i=l;i<=d;i++){
    digits_of_l=digit_calculator(i);
    if(digits_of_l==x){
        printf("%d\n",i);
        break;
    }
}

for (int i=d;i>=l;i--){
    digits_of_d=digit_calculator(i);
    if(digits_of_d==x){
        printf("%d",i);
        break;
    }
}

return 0;
}


int digit_calculator(int x){
int digit=0;
int output=0;
int first_value=x;

if (x<=9){digit=1;}
else if (x<=99){digit=2;}
else if (x<=999){digit=3;}
else if (x<=9999){digit=4;}
else if (x<=99999){digit=5;}

for (int i=1;i<=digit;i++){
    output=output+(x%10);
    x=x/10;
}
return output;

}
