#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n;
	printf("Enter Total Lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   for(j=1;j<=9;j++){
	   	if(j<=4+i && j>=6-i)
	   	printf("*");
	   	else
	   	printf(" ");
	   }
	printf("\n");
	}
	getch();
	return 0;
}
