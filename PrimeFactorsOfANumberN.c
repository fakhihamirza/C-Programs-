#include<stdio.h>
#include<conio.h>
int prime(int x);
int prime(int x){
	int i,count=0;
	for(i=1;i<=x;i++){
		if(x%i==0)
		count++;
	}
	if(count==2)
		return(1);
	}
int main(){
	int n,x,i;
	printf("Enter A Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(n%i==0){
	x=prime(i);
	if(x==1)
	printf("%d\n",i);
    }
    }
	getch();
	return 0;
}
