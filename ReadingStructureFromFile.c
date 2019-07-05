#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct student{
	int roll;
	int age;
	char p[15];
}std;

int main(){
std data;
char x='Y';
FILE *fp;
fp=fopen("StudentData.txt","r");
if(fp==NULL){
printf("File Can Not Be Opened !");
exit(1);
}
while(fscanf(fp,"%s%d%d",&data.p,&data.age,&data.roll) != -1){ // fscanf returns '-1' so the condition changes
printf("Name : %s\nAge : %d\nRoll Number : %d\n",data.p,data.age,data.roll);
}
}
