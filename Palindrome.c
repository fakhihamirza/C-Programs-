#include<stdio.h>
#include<conio.h>
int main(){
	int n,rev=0,i,x;
	printf("Enter A Number :");
	scanf("%d",&n);
	i=n; //12321
	while(n!=0){
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	if(rev==i)
	printf("The Number %d Is A Palindrome",i);
	else
	printf("The Number %d Is Not A Palindrome",i);
	getch();
	return 0;
}
