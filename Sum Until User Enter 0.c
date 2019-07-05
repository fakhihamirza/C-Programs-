#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum=0;
	while(n){
		printf("Enter A Number :");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("The Sum Is %d",sum);
	getch();
	return 0;
}
