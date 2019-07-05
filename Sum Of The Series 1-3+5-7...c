#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,a,b,j=1,k=1,sum,sum1=0,sum2=0;
	printf("               Calculation Of Series 1-3+5-7+9....To 'N' Terms ");
	printf("\nEnter Total Number Of Terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){ /* i representing terms number */
	if(i%2==0){ /* when term number is even like 2nd term 4th term and so on */
    b=(3)+((j-1)*(4)); /* a formula to calculate only the sum of even places terms like in the given series 1-3+5-7+9-11 here sum is of only -(3+7+11) (taking - common
	and will subtract it in the end from sum2 to calculate the total sum of the series 1-3+5 
	/*the sum in sum1 varaible and incrementing in j so that when next time this condition goes true the sum that will be calculated if of 2 terms*/
	j++;
	sum1=sum1+b;
	}
	else{ /* when term number is odd like 1st term 3rd term 5th term of the series */
	a=(1)+((k-1)*(4));
	k++;
	sum2=sum2+a;
    }
    }
    sum=(sum2-sum1);
    printf("The Sum Of The Series Is %d",sum);
    getch();
    return 0;
}
