#include<stdio.h>

int prime(int n , int x){
int count=0;
if((n/2)==x || n==0){
count++;
return count;
}
else
if(n%x==0){
count++;
x++;
return count+prime(n,x);
}
else
return count+prime(n,x+1);

}

int main(){
int n,x=1;
printf("Enter A Number To Check If It Is Prime Or Not :"); 
scanf("%d",&n);
x=prime(n,x); /* We Can Make It More Efficient Program By Checking From 2 to ( Root Of n ) - 1  If There Will Be No Divisors Of That
Number Then No Will Be Prime Else Number Is Not Prime */
if(x==2)
printf("%d Is A Prime Number",n);
else
printf("%d Is Not A Prime Number",n);

}
