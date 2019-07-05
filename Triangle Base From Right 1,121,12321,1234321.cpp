#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,p=0;
	for(i=1;i<=9;i++){
		k=1;
		p=i<6?++p:--p;
		for(j=1;j<=5;j++){
			if(j>=6-p){
				printf("%d",k);
				k++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
