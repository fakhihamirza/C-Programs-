#include<stdio.h>
#include<conio.h>
/* Prime Numbers Sum = Actual Number */
int Prime(int);
int Prime(int a){
	int b,count=0;
	for(b=1;b<=a;b++){
		if(a%b==0){
		count++;
	    }
	}
	if(count==2)
	return(1);
	else if(count==1)
	return(1);
	else
	return(0);
}
int main(){
	int n,i=1,p=0,s,j,k;
	printf("Enter Any Number :");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
	p=n-i;
	s=i+p;
	j=Prime(i);
	k=Prime(p);
	if(j==1 && k==1)
	printf("\n%d + %d = %d",i,p,s);
    }
	getch();
	return 0;
}
