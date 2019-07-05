#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x,y,a,b,c,D;
	printf("             Roots Of A Quadratic Equation a^2x+bx+c=0\nEnter Values Of a,b & c Of Quadratic Equation a^2x+bx+c=0 :");
	scanf("%f%f%f",&a,&b,&c);
	D=b*b-4*a*c;
	if(D==0){
		x=(-b+sqrt(D))/(2*a);
		printf("The Roots Are Equal With Value : %.1f",x);
	}
	else if(D<0){
		printf("Roots Are Imaginary");
	}
	else if(D>0){
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
	    printf("Roots Are Real & Distinct And The Values Of Roots Are %.1f & %.1f",x,y);
	}
	getch();
	return 0;
}
