#include<stdio.h>
#include<conio.h>
int main(){
int size,i,x,max1,max2,index;
printf("Enter Size Of An Array :");
scanf("%d",&size);
int a[size];
printf("Enter %d Numbers :",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
max1=a[0];
for(i=1;i<size;i++){
if(a[i]>max1){
max1=a[i];
index=i;
}
}
x=a[size-1];
a[size-1]=a[index];
a[index]=x;
max2=a[0];
for(i=1;i<size-1;i++){
if(a[i]>max2)
max2=a[i];
}
printf("The Second Largest Number Is %d",max2);
}
