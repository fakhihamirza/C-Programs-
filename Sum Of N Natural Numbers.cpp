#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int s=0;
	printf("Enter Sum Range : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("The Sum Is : %d",s);
	getch();
	return 0;
}

	
	

