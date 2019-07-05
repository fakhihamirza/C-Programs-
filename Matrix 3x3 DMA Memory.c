#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,**ptr=(int **)calloc(3,sizeof(int *));
	for(i=0;i<3;i++){
	*(ptr+i)=(int *)calloc(3,sizeof(int));
	}
	printf("Enter Values In 3x3 Matrix\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	scanf("%d",&*(*(ptr+i)+j));
	}
	}
	
	printf("The Matrix You Entered Is ,\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("%d ",*(*(ptr+i)+j));
	}
	printf("\n");
	}
}
