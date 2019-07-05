#include<stdio.h>
#include<conio.h>
int main(){
	char b,a[50];
	int i,l;
	printf("Enter Any String :");
	gets(a);
	for(l=0;a[l];l++);
	for(i=0;i<l/2;i++){ 
	b=a[i]; 
	a[i]=a[l-1-i];
	a[l-1-i]=b;
    }	
    puts(a);
    getch();
    return 0;
}
