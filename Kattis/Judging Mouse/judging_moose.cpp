#include <stdio.h>

int main(){

int l,r;
scanf("%d %d",&l,&r);

    if (l==0&&r==0){
    printf("Not a moose");
    }

    else if (l==r){
    printf("Even %d",2*l);
    }

    else if (l>r){
    printf("Odd %d",2*l);
    }

    else if (r>l){
    printf("Odd %d",2*r);
    }
return 0;
}
