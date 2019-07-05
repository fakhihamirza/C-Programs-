#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n;
	printf("Enter Total Lines :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=5;i<=j;j--){
		printf("*");
	}
	printf("\n");
}
getch();
return 0;
}
