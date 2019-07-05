#include<stdio.h>
#include<conio.h>
int main(){
	
int i,j,k,count=0,x; // 10 5 7 8 2 1 7 8 5 0
printf("Enter Total Numbers You Want To Enter :");
scanf("%d",&x);
int a[x];
k=x-1;
printf("Enter %d Numbers :",x);
for(i=0;i<x;i++){
scanf("%d",&a[i]);
}



for(i=0;i<x;i++){
for(j=i+1;j<=k;j++){
if(a[i]==a[j]){
a[i]=a[k];
count++;
k--;
}
}
}


for(i=0;i<10-count;i++){ 
printf(" %d ",a[i]);
}
}
