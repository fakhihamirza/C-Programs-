#include<stdio.h>
#include<conio.h>
int main(){
	int s,i,t,j;
	printf("Enter Size Of An Array :");
	scanf("%d",&s);
	int n[50];
	printf("Enter %d Numbers \n",s);
	for(i=0;i<s;i++){
	printf("\nEnter No#%d : ",i+1);
	scanf("%d",&n[i]);
    } 
	for(i=1;i<=s;i++){
		if(n[i]>n[i-1]){
		t=n[i];
		n[i]=n[i-1];
		n[i-1]=t;
	    }
        }
printf("\nIn Descending Order ");
for(i=0;i<=s-1;i++){
printf("\t%d",n[i]);
}
printf("\nIn Ascending Order  ");
	for(j=1;j<=s;j++){
	for(i=0;i<s;i++){
		if(i!=0){
		if(n[i]<n[i-1]){
		t=n[i];
		n[i]=n[i-1];
		n[i-1]=t;
	    }
	}
}
}
for(i=0;i<=s-1;i++){
printf("\t%d",n[i]);
}
}
