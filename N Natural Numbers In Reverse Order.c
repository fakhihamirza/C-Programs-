#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	printf("Enter A Number :");
	scanf("%d",&n);
	i=n;
	while(i!=0){
		printf("\n%d",i);
		i--;
	}
	getch();
	return 0;
}
