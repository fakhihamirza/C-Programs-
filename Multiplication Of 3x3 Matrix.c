#include<stdio.h>
#include<conio.h>
int main(){
int a[3][3],b[3][3],c[3][3],i=0,j=0,k=0,sum=0;
printf("\t\t\tEnter The Elements Of First 3x3 Matrix \n");


for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}


printf("\n\t\t\tEnter The Elements Of Second 3x3 Matrix \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&b[i][j]);
}
}

printf("\n\t\t\tThe Multiplication Of Matrix #1 & Matrix #2 \n");


for(i=0;i<3;i++){
for(j=0;j<3;j++){
sum=0;
for(k=0;k<3;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}

}



for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf(" %d  ",c[i][j]);
}
printf("\n");
}
}
