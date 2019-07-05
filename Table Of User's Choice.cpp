#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,p;
	printf("Enter A Table : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	p=n*i;
	printf("\n%d*%d=%d",n,i,p);
    }
    getch();
}
