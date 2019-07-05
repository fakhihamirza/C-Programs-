#include<stdio.h>
#include<conio.h>
int Factorial(int);
int Combination(int , int);
int Factorial(int n){
	int b,p=1;
	for(b=1;b<=n;b++)
	p=p*b;
	return(p);
}
int Combination(int n,int r){ /* nCr = " n! / ( (n-r)! * r! ) " */
    int combination;
	combination=( Factorial(n) ) / ( Factorial(n-r) * Factorial(r) );
	return(combination);
}
int main(){
	int i,j,k,lines,r;
	printf("Enter Total Lines For A Pascal Triangle :");
	scanf("%d",&lines);
	for(i=1;i<=lines;i++){
		k=1;
		r=0;
	for(j=1;j<=(lines*2)-1;j++)
	{
		if(j>=lines+1-i && j<=lines-1+i && k){
		printf("%.d",Combination(i-1,r));
		k=0;
		r++;
	    }
	    else{
		printf(" ");
		k=1;
	    }
	}
	printf("\n");
	}
	return 0;
}
