#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,s;
	printf("Enter A Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	s=i*i;
	printf("\nThe Square Of %d Is %d",i,s);
	}
	getch();
	return 0;
}
