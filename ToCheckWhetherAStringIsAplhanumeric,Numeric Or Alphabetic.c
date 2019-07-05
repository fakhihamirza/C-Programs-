#include<stdio.h>
#include<conio.h>
int main(){
int i=0,count1=0,count2=0;
char a[15];
printf("Enter A String :");
gets(a);
for(i=0;a[i]!='\0';i++){
if(a[i]>=48 && a[i]<=57)
count1++;
else if( (a[i]>=65 && a[i]<=90) || (a[i]>=97  &&  a[i]<=122 ) )
count2++;
}

if(count1!=0 && count2==0)
printf("The String Only Contains Numbers");
else if(count1!=0 && count2!=0)
printf("The String Is Alphanumeric");
else if(count1==0 && count2!=0)
printf("The String Only Contains Alphabets");
}

