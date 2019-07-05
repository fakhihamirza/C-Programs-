#include<stdio.h>
#include<conio.h>
struct book
{
	int bookid;
	float price;
	char name[20];
};
struct book input(); /* struct lazmi likhna hoga kiun k book jo humara data type ha
wo humne khud struct ki ha to declaration statement mein khud ki data type structure
ko declaration statements mein struct lagana perhta ha declare kerne k liye or 
input humaray function ka naam tha jo returning book data type tha isliye peechay book
likha hua ha or phr input jo k function ka"name" ha or take mein kxh nahi ha */
struct book input()
{
	struct book b;/* book data type mein humne b variable isliye banya ha takay jo
	bhi data user se entered kerwaen wo hum return kerwaskein main function mein 
	us jaga jahan se input function call hua tha takay user ka sara entered input data
	b mein stored ho or b return hojae wahan main mein jahan se input ko call kia ha
	or var1 mein store hojae sb kxh jo bd mein display function se display hojae */	
	printf("Enter The bookid : ");
	scanf("%d",&b.bookid);
	fflush(stdin); /*jb koi values hum keyboard se type kerte hain to beech mein pehle
	buffer hota ha jisme data store hota ha phir wahan se data scan hota ha lekin jb scan
	kerte hain to buffer mein data bharjata ha or forhan gets nahi chalskta kiun k gets
	bhi buffer mein rakhta ha data or buffer bhara hua hota ha isliye usko khali kerne k 
	liye fflush(stdin); ka use kerte hain */
	printf("Enter The Book Name : ");
	gets(b.name); /*b ek head hai name,book id, or price variables ka b humaray 
	structure ka ek head variable ha jiske ander 3 variables hain jinme humko different
	data store kerne hain like name,bookid,price ye sb different data type hain isliye
	inko store kerwanay ka way hai b.name wgera */
	fflush(stdin);
	printf("Enter The Book Price : ");
	scanf("%f",&b.price);
	return b;
}
void display(struct book b);
void display(struct book b)
{
	printf("\n The Book ID Is %d \n The Book Name Is %s \n The Price Of Book Is %f",b.bookid,b.name,b.price);
}

main()
{
	struct book var1; /* humne apne data type book mein ek variable1 bnaya hai takay
	hum jo function input() bana ker call kerrahay hain uski returned value var1 mein
	store hojae or usko phir display function se display kerwaskein */
	var1=input();
	display(var1);
	getch();
}
