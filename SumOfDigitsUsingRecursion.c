#include<stdio.h>
#include<conio.h>
int sod(int n){
int sum;
if(n!=0 && sum!=0){
sum=sum+(n%10);
n=n/10;
return sod(n);
}//58675=31
}
int main(){
int n,x;
printf("Enter A Number :");
scanf("%d",&n);
x=sod(n);
printf("The Sum Of The Digits In The Number Is : %d",x);
	
}
