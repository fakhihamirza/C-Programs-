#include<stdio.h>
#include<conio.h>
int main(){
int r,c,i,j;
printf("Enter Total Rows & Columns Of A Matrix:");
scanf("%d %d",&r,&c);

int a[r][c];
printf("\nEnter Values \n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}

printf("The Matrix Before Transpose \n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf(" %d ",a[i][j]);
}
printf("\n");
}

printf("The Matrix After Transpose \n");
for(i=0;i<c;i++){
for(j=0;j<r;j++){
printf(" %d ",a[j][i]);
}
printf("\n");
}

getch();
return 0;
}
