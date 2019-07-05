#include<stdio.h>
#include<conio.h>
int TakeIntegersOnly();
int TakeIntegersOnly(){
	int num=0,ch;
	while(1){ /* An Infinite While Loop Takay Baar Baar 1,1 Kerke getch Characters Lete Rahay*/
	ch=getch();
	if(ch>=48 && ch<=57){ /* ascii codes for integers only */
		printf("%c",ch); /* for 1st iteration jo bhi pehle character getch lega user se wo print hojaega hum isko is trh bhi print kerskte thay
		printf("%c",ch); isse ch-48 nahi kerna perhayga kiun k ager %d specifier use kereinge to ascii code print hajega us integer ka jo user ne enter kia ha
		or %c kereinge to sirf wo integer ayega means ascii code print nahi hoga or wo us integer ko as a character lega */
		num=num*10+(ch-48); /* ek variable num bnaya tha initially 0 tha for 1st iteration if user enter 0 then ascii code of 0 is 48 so ch will
		assign 48 so num=0*10+(48-48), therefore num=0 but for 2nd iteration ch=49 if user enter 1 ascii code =49 for 1 so num=0*10+1 so num assigns 1 for
		3rd iteration num=1*10+2 num=12 which is the integer that user have entered to integers ki values ko store kerwanay k liye kisi variable mein ye kaam kera ha
		or jb ch ager user enter press kerega to enter ka ascii code 13 hota ha to ch mein 13 chalayjaega to loop will break or return kerdega function num ki wo
		value jo user ne abhi tk jitne numbers k liye enter keri thi like 123,1456 etc or wo value assign hojaegi us variable integer mein jahan per function 
		call hua tha or display hjaegi value integer ki */
		/* %c jb use hoga for any number ya kisi bhi char k liye to wo direct keyboard walay inputs ko print kerta ha ascii codes ko nahi kerega humara varaible 
		ch tha to int type ka lekin ager %d user kereinge to wo ascii codes ko print kerwadega isliye ascii code mein se -48 kera for %d format specifier wrna %c
		direct keyboard walay inputs ko represent kerta ha */
	}
	if(ch==13)
	break;
	}
	return(num);
}
int main(){
	int integer;
	printf("Enter An Integer :");
	integer=TakeIntegersOnly();
	printf("\nYou Have Entered : %d",integer);
}
