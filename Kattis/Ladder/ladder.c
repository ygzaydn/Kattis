#include<stdio.h>
#include<math.h>

#define M_PI acos(-1.0)
int main()
{
  double sinValue, radianVal, degreeVal;
  double high;
  double result;
  int output;

  scanf("%lf",&high);
  scanf("%lf", &degreeVal);

  // Convert Degree Value to Radian
  radianVal = degreeVal * (M_PI/180);
  sinValue = sin(radianVal);

  result = high/sinValue;
  output = ceil(result);

  printf("%d ",output);

  return 0;
}


