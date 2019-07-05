#include<stdio.h>
#include<string.h>
typedef struct student{
	int id;
	char name[15];
}std;

int main(){
std x,*p; // where p is the pointer which is pointing to the elements of the structure through that structure variable x
p=&x;
p->id=180142;
(*p).id=87867; // both are correct notations either u use arrow to pint structures or use dot like this
strcpy(p->name,"Tashik");
printf("Name : %s\nId : %d",p->name,p->id);
printf("\nName : %s\nId : %d",(*p).name,(*p).id);  // Also we can point the structure using this notation too..

}
