#include<stdio.h>
#include<conio.h>
int main(){
int i,j,p=0;
char k;
k='A';
for(i=1;i<=8;i++){
p=i<5?++p:--p;
if(i>5){
p=i>5?p--:p++;
}
else if(i==5){
p=4;
}
for(j=1;j<=4;j++){
if(j>=1 && j<=p){
printf("%c",k);
}
else{
printf(" ");}
}
printf("\n");
k++;
}
}
