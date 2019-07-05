#include<stdio.h>
#include<string.h>
int main(){
	char a[]={"My Name - Is - Tashik -afaf-afqetq"};
	char *x;
	x=strtok(a,"-");
	printf("%s\n",*x);
	while(x!=NULL){
	x=strtok(NULL,"-");
	printf("%s\n",*x);
}
}
