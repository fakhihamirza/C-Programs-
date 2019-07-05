#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,count;
	printf("Enter A Range For Prime Numbers To Be Printed :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	count=0;
	for(j=1;j<=i;j++){
	if(i%j==0){
	count++; /* Ager 2 se ziada divisors mtlb 1 or us number k hone k ilawa ager koi dusra number bhi divisor hoga to count ki value 2 se ziada hogi or ager srf 2
	divisors hunge to count ki value srf 2 hogi */
	}
	}
	if(count==2)
	printf("\n%d\n",i);
	}
    getch();
    return 0;
	}
