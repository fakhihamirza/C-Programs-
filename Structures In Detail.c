#include<stdio.h>
struct Date {
int d,m,y;
}x; // where x is the global variable of our own defined data type "Date" i.e global variable of our structure

struct Date x; // we can also declare the global variables of our own defined data type (structure) like this it will also 
// consume 12 byte memory like Today variable.

struct Date input(){ // here return type is = 'struct Date' and function name is input
	struct Date x; // variable declaration
	printf("Enter Day / Month / Year :");
	scanf("%d/%d/%d",&x.d,&x.m,&x.y); // user should input / also while entering the date
	return x;
}

struct Date display(struct Date Y){ // where struct Date Y is the copy of varaible D1
printf("%d/%d/%d",Y.d,Y.m,Y.y);
}
int main(){
struct Date D1,Today={12,11,2018}; // here today consumes 12 byte memory because 4 for d 4 for m and 4 for y also we can
// initialize the values to our variable of our own defined data type same like array the first index will assign value to d
// the second value in braces will assign value to m and then 3rd will assign to y but if d,m & y are of different types
// then values in braces should be of that type like if m is of char type then Today={12,N,2018} 
// but ager alag alag assign kerna ho to is trh kereinge Today.d= " " etc
// if we want to assign values of Today variable into D1 then we can simply do this D1=Today; or we can assign one by one like 
// D1.d=Today.d; and so on we can scan values similarly like scanf("%d/%d/%d",&D1.d,&D1.m,&D1.y); but the user should also
// enter the data by separating it with slashes / / and we want to print then we have to repeat the same procedure with printf
D1=input(); /* Calling A Function Input Which Is Takes Nothing But Return Something Nature So I Will Return A Input 
Given By The User According To Its Definition As Defined In The Structure Date mtlb jis trh ki date honi chahye us trh ka
input return hoga */
display(D1);
}


/* Array Of Structure
#include<stdio.h>
struct student{
int id,marks;
char name[15];
};

int main(){
struct student a[5];
int i;
printf("Enter Roll Numbers , Marks & Names Of 5 Students \n");

for(i=0;i<5;i++){
printf("Enter Details For Student#%d\nEnter Student ID , Student Marks & Student Roll No",i+1);
scanf("%d%d",&a[i].id,&a[i].marks);
fflush(stdin);
gets(a[i].name);
}

for(i=0;i<5;i++){
printf("The Details For Student#%d Are,\nStudent ID = %d\nStudent Marks = %d\nStudent Roll No = %s",i+1,a[i].id,a[i].marks,a[i].name);

}
}
*/
