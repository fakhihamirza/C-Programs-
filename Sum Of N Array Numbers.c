#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum=0,i;
	printf("Enter Size Of An Array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("\nEnter Value # %d :",i+1);
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	printf("\nThe Sum Of The Array Elements Is : %d",sum);
    getch();
}
