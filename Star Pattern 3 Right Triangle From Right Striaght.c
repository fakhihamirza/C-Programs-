#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n;
	printf("Enter Total Lines :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=10;j++){
	if(j>=(11-i))
	printf("*");
	else
	printf(" ");
}
	printf("\n");
}
    getch();
    return 0;
}
