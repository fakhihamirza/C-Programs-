#include<stdio.h>
#include<conio.h>
int main(){
int i,j,r,c,sum=0;
printf("Enter Total Rows & Columns :");
scanf("%d%d",&r,&c);
if(r==c){
int a[r][c];
printf("Enter Values Of The Matrix\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}

for(i=0;i<=0;i++){
for(j=0;j<c;j++){
sum=sum+a[j][j];
}
}
printf("The Trace Of The Matrix Is = %d",sum);
}
else
printf("The Trace Can't Be Calculated ");


}
