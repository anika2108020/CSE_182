
main()
{
 int a,b,c;
 printf("Enter 3 numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b)&& (a>c))
 {
 printf("The maximum number is=%d",a);
 }
 else if((b>a) && (b>c))
 {
 printf("The maximum number is=%d",b);
 }
 else
 printf("The maximum number is=%d ",c);
}
