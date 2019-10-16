#include<stdio.h>

main() {

    int number_of_numbers;
    int i=0;
    int k=0;

    scanf("%d",&number_of_numbers);

    int numbers[19];

    while (i<number_of_numbers){
        scanf("%d",&numbers[i]);
        i++;
        }

    while (k<number_of_numbers){
        if (numbers[k]%2==0){
            printf("%d is even\n",numbers[k]);
        }
        else {
            printf("%d is odd\n",numbers[k]);
        }
        k++;
    }


}


