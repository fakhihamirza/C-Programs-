#include<stdio.h>
#include<conio.h>
int main()
{
int age,salary;
printf("Enter Your age :");
scanf("%d",&age);
printf("Enter Your salary :");
scanf("%d",&salary);
if(salary < 25000)
{
	if(age < 18)
	printf("You Do'nt Have To Pay The Tax !");
}
else
{
	printf("You Have To Pay The Tax !");
}
getch();
return 0;
}
