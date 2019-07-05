#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
char p[5][50]={"Tashik","Ali","Mustafa","Anfaal","Hasan"}; 
char *ptr[5];
for(i=0;i<5;i++){
ptr[i]=&p[i];
}
for(i=0;i<5;i++){
printf("The  Name #%d Is %s\n",i+1,ptr[i]); // printing each string by accessing each row's string base address so by using %s
// specifier it will print until \0 character
}
for(i=0;i<=0;i++){
for(j=0;j<6;j++){
printf("%c\n",*ptr(i+j) ); // accessing character by character of first string
}
}

}
