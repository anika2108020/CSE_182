#include<stdio.h>
main ()
{
 int rad,d;
 float c, area, pi=3.1416;
 printf("Enter the radius:");
 scanf("%d",&rad);
 d=2*rad;
 c=2*pi*rad;
 area=pi*rad*rad;
 printf("The diameter is = %d unit\n",d);
 printf("The circumference is = %f unit\n",c);
 printf("The area is = %f sq.unit",area);
}

