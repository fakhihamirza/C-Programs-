#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("\nEnter The First Number a :");
scanf("%d",&a);
printf("\nEnter The First Number b :");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\nThe Value Of a Now Is : %d",a);
printf("\nThe Value Of b Now Is : %d",b);
getch();
}

