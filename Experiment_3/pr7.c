#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c;
    float x1,x2;
    printf("ax2+bx+c=0 be a quadratic equation.\n");
    printf("Enter the coefficients a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if((b*b-4*a*c)>=0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%f and x2=%f",x1,x2);
    }
    else
    {
        printf("The roots are not real.");
    }
}
