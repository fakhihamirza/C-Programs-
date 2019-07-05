#include<stdio.h>
#include<conio.h>
int main(){
int i;
char a[20];
printf("Enter A String :");
gets(a);
for(i=0;a[i]!='\0';i++){
if(a[i]>='A' && a[i]<='Z'){
a[i]=a[i]+32;
}
}
printf("The String After Converting It Into Upper Case Is %s",a);
}
