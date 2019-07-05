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
	fp=fopen("Write & Read DataFromStructureToFile.txt","rb");
	if(fp==NULL){
		puts("Can Not Open File ");
		exit(1);
	}
	while(fread(&a,sizeof(a),1,fp)!=0){
		printf("%s %d %f\n",a.name,a.age,a.salary);
		fflush(stdin);
	}
	fclose(fp);
	return 0;
}
