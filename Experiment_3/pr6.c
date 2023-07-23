#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
      if((a==b)&&(b==c))
    {
        printf("The triangle is equilateral.");
    }
    else if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b)))
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The triangle is scalene.");
    }
    }
    else
    {
        printf("The triangle is invalid");
    }

}
