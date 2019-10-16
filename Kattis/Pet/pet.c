#include <stdio.h>

main(){

    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    int z1,z2,z3,z4;
    int t1,t2,t3,t4;
    int k1,k2,k3,k4;

    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    scanf("%d %d %d %d",&y1,&y2,&y3,&y4);
    scanf("%d %d %d %d",&z1,&z2,&z3,&z4);
    scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
    scanf("%d %d %d %d",&k1,&k2,&k3,&k4);

    int x_total=x1+x2+x3+x4;
    int y_total=y1+y2+y3+y4;
    int z_total=z1+z2+z3+z4;
    int t_total=t1+t2+t3+t4;
    int k_total=k1+k2+k3+k4;

    if (x_total>y_total && x_total>z_total && x_total>t_total && x_total>k_total){
        printf("1 %d",x_total);
    }
    if (y_total>x_total && y_total>z_total && y_total>t_total && y_total>k_total){
        printf("2 %d",y_total);
    }
    if (z_total>x_total && z_total>y_total && z_total>t_total && z_total>k_total){
        printf("3 %d",z_total);
    }
    if (t_total>x_total && t_total>y_total && t_total>z_total && t_total>k_total){
        printf("4 %d",t_total);
    }
    if (k_total>x_total && k_total>y_total && k_total>z_total && k_total>t_total){
        printf("5 %d",k_total);
    }
}


