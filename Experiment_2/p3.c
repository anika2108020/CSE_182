#include<stdio.h>
main ()
{
 float cm,m,km;
 printf("Enter length in cm:");
 scanf("%f",&cm);
 m=cm/100;
 km=cm/100000;
 printf("%.2f cm= %f m ",cm,m);
 printf("%.2f cm= %f km ",cm,km);

}

