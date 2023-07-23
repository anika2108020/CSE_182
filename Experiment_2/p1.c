#include<stdio.h>
main ()
{
 int a,b,per,area;
 printf("Enter length and breadth of a rectangle:");
 scanf("%d%d", &a,&b);
 per=2*(a+b);
 area=a*b;
 printf("The Perimeter=%d unit \nThe area=%d sq.unit",per,area);
}

