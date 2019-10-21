#include <stdio.h>

main (){

    int hour;
    int minute;

    scanf("%d %d",&hour,&minute);

    if(hour>=1 && minute<45) {
    minute = minute-45+60;
    hour = hour -1;
}
    else if(hour<=0 && minute<45){
    minute = minute-45+60;
    hour = hour -1+24;
}
    else if(hour<=0 && minute>=45){
    hour = hour-1+24;
}
    else{
    minute=minute-45;
}
    printf("%d %d",hour,minute);
}


