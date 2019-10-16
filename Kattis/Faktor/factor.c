#include <stdio.h>
#include <math.h>

int main(){

int number_of_articles;
int impact_factor;
int output=0;

scanf("%d %d",&number_of_articles,&impact_factor);

output=number_of_articles*impact_factor-number_of_articles+1;
printf("%d",output);


return 0;
}


