#include <stdio.h>

int main () {

    /*variables*/
    int x;
    int y;

    scanf("%d\n", &x);
    scanf("%d", &y);

    if (x<0 && y<0){
        printf("3");
    }
    else if (x<0 && y>0){
        printf("2");
    }
    else if (x>0 && y<0){
        printf("4");
    }
    else if (x>0 && y>0){
        printf("1");
    }}


