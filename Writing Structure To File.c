#include<stdio.h>
#include<stdlib.h>

typedef struct emp{
char name[40];
int age;
float salary;
}emp;
emp a;


int main(){
	FILE *fp;
	char x='y';
	fp=fopen("Write & Read DataFromStructureToFile.txt","ab");
	if(fp==NULL){
		puts("Can Not Open File ");
		exit(1);
	}
	while(x=='y'){
		printf("Enter Name , Age & Salary :");
		scanf("%s %d %f",a.name,&a.age,&a.salary);
		fwrite(&a,sizeof(a),1,fp);
		printf("Do You Want To Write More Records ? (y/n) :");
		fflush(stdin);
		x=getch();
	}
	fclose(fp);
	return 0;
}
