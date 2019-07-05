#include<stdio.h>
#include<conio.h>
int main(){
	char b,a[50];
	int i,l;
	printf("Enter Any Array[String] :");
	gets(a);
	for(l=0;a[l];l++);
	for(i=0;i<l/2;i++){ /* here the condition is i<l/2 because the we have to swap half times either the length is odd or even if the length is odd it will consider length
	as an integer like 7/2 = 3.5 but l and i are integers so 4 will be considered and in 7 length of string we have to swap 3 times which is correct because the middle
	 character of the string remains unswapped */
	b=a[i]; /* Example if our string is Tashik so a[0]=T a[1]=a a[2]=s and so on... so when i=0 a[i] is representing the first chracter of string which we have 
	stored in a new character variable b to swap it with the last character of our string so a[L-1-i] representing the elements from right hand side where
	L=length of our string entered by the user so a[6-1-0]=a[5] which is 'k' so k is stored in a[0] and b was having 't' so in the end we have assigned 't' into a[5]
	remember here L=6 bcz our string is "Tashik" */
	a[i]=a[l-1-i];
	a[l-1-i]=b;
    }	
    puts(a);
    getch();
    return 0;
}
