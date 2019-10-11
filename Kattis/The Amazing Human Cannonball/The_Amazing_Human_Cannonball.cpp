#include <stdio.h>
#include <math.h>

const float PI=acos(-1.0);
#define ANGLE(x) (x*PI/180)
const float G=9.81;

int main (){

int number_of_test_cases;
scanf("%d",&number_of_test_cases);
float datas[5];
float x_1,h_1,h_2,t,theta,velocity,y_1;

for (int i=0;i<number_of_test_cases;i++){
    scanf("%f %f %f %f %f",&datas[0],&datas[1],
    &datas[2],&datas[3],&datas[4]);

    velocity=datas[0];
    theta=datas[1];
    x_1=datas[2];
    h_1=datas[3];
    h_2=datas[4];

    t = ((x_1)/(velocity*cos(ANGLE(theta))));
    y_1 = ((velocity*t*sin(ANGLE(theta)))-(0.5*G*t*t));

    if (y_1 >(h_1+1) && y_1<(h_2-1)){
        printf("Safe\n");
    }
    else {
        printf("Not Safe\n");
    }
}

return 0;
}
