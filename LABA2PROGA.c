#include <stdio.h>
#include <math.h>

int main()
{
float z1,z2,x;
scanf("%f",&x);
z1=(1 - (2 * sin(x))*(2 * sin(x))) / (1 + sin(2*x));
z2=( 1- ( sin(x) / cos(x))) / (1 + (sin(x)/cos(x)));
printf("%f\n",z1);
printf("%f",z2);
}
