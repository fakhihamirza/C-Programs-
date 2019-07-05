#include<stdio.h>
#include<conio.h>
int main(){
int i=0,j=0,k=0,sum=0,r1,c1,r2,c2;
printf("Enter Total Rows & Columns Of First Matrix :");
scanf("%d%d",&r1,&c1);
printf("Enter Total Rows & Columns Of Second Matrix :");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],mul[r1][c2]; // the final matrix is of order pxb is pxq is order of first and axb is order of second
if(c1==r2){
printf("\n\t\t\tEnter The Elements Of First %dx%d Matrix \n",r1,c1);
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d",&a[i][j]);
}
}


printf("\n\t\t\tEnter The Elements Of Second %dx%d Matrix \n",r2,c2);
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d",&b[i][j]);
}
}

printf("\n\t\t\tThe Multiplication Of Matrix #1 & Matrix #2 \n");


for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
sum=0;
for(k=0;k<r2;k++)
sum=sum+a[i][k]*b[k][j];
mul[i][j]=sum;
}

}



for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf(" %d  ",mul[i][j]);
}
printf("\n");
}
}
else
printf("Multiplication Is Not Possible For Given Order");
}
