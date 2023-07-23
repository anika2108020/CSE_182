#include<stdio.h>
main ()
{
 float cel,fah;
 printf("Enter temperature in Celsius:");
 scanf("%f",&cel);
 fah=((9*cel)/5)+32;
 printf("%f celsius = %f fahrenheit",cel,fah);
}

