#include <stdio.h>
#include <math.h>

main(){

    int num_of_iterations;
    int output=4;

    scanf("%d",&num_of_iterations);

    for(int i=1;i<=num_of_iterations;i++){

        output=(sqrt(output)+sqrt(output)-1);
        output=output*output;

    }
        printf("%d",output);


}
