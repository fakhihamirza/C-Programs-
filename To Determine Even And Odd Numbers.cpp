#include<stdio.h>
#include<conio.h>
int main()
{
int number;
printf("Enter Any Number :");
scanf("%d",&number);
if((number%2) == 0)
{
	printf("Its An Even Number");
}
else
{
	printf("Its An Odd Number");
}
getch();
return 0;
}
