#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i;
int n,p=1,j;
printf("Enter A Factorials Range :");
scanf("%d",&n);
for(i=1;i<=n;i++){
p=p*i;
printf("Number : %d  Factorial : %d\n",i,p);
}
getch();
return 0;
}

