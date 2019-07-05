#include<stdio.h>
#include<conio.h>
int main(){
	char a[50],x[50];
	int i,l,j;
	printf("Enter Data In Array #1:");
	gets(a);
	for(l=0;a[l];l++);
	for(i=0,j=0;i<=l;i++,j++){
	x[j]=a[l-1-i];
    }	
    printf("The Reverse Of Array #1 In Array #2 Is %s",x);
    getch();
    return 0;
}
