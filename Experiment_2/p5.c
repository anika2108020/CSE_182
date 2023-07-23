#include<stdio.h>
main()
{
 int day,year,month,week,d;
 printf("Enter the days:");
 scanf("%d",&day);
 year=day/365;
 month=(day%365)/30;
 week=((day%365)%30)/7;
 d=((day%365)%30)%7;
 printf("%d days = %d years %d months %d weeks and %d days",day,year,month,week,d);
}

