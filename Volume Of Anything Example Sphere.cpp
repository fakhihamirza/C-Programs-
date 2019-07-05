#include<stdio.h>
#include<conio.h>
int main()
{
	int radius;
	float volume;
	printf("Enter The Radius :");
	scanf("%d",&radius);
	volume=1.3333*3.14*radius*radius*radius;
	printf("The Volume Of Sphere Is : %f",volume);
	getch();
	return 0;
	
}
