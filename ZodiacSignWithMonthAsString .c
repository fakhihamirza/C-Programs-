#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int d; 
	char m[20];
	fflush(stdin);
	printf("Enter Day :");
	scanf("%d",&d);
	fflush(stdin);
	printf("Enter The Name Of Month :");
	gets(m);
	fflush(stdin);
    if (strcmp(m,"December")==0 || strcmp(m,"december")==0 && d>=22 && d<=31 ) {
		printf("The Zodiac Is : Capricorn");
	    }
	else if (strcmp(m,"January")==0 || strcmp(m,"January")==0 && d>=1 && d<=19 ) {
		printf("The Zodiac Is : Capricorn");
	    }
	else if (strcmp(m,"January")==0 || strcmp(m,"January")==0 && d>=20 && d<=31 ) { 
		printf("The Zodiac Is : Aquarius");
	    }
	else if (strcmp(m,"February")==0 || strcmp(m,"february")==0 && d>=1 && d<=17 ) { 
		printf("The Zodiac Is : Aquarius");
		}
	else if (strcmp(m,"February")==0 || strcmp(m,"february")==0 && d>=18 && d<=31 ) { 
		printf("The Zodiac Is : Pisces");
		}
	else if (strcmp(m,"March")==0 || strcmp(m,"march")==0 && d>=1 && d<=19 ) { 
		printf("The Zodiac Is : Pisces");
	    }
	else if (strcmp(m,"March")==0 || strcmp(m,"march")==0 && d>=20 && d<=31 ) { 
		printf("The Zodiac Is : Aries");
		}
	else if (strcmp(m,"April")==0 || strcmp(m,"april")==0 && d>=1 && d<=19 ) { 
		printf("The Zodiac Is : Aries");
	    }
	else if (strcmp(m,"April")==0 || strcmp(m,"april")==0 && d>=20 && d<=31  ) { 
		printf("The Zodiac Is : Taurus");
		}
	else if (strcmp(m,"May")==0 || strcmp(m,"may")==0 && d>=1 && d<=20 ) { 
		printf("The Zodiac Is : Taurus");
		}
	else if (strcmp(m,"May")==0 || strcmp(m,"may")==0 && d>=21 && d<=31) { 
		printf("The Zodiac Is : Gemini");
		}
	else if (strcmp(m,"June")==0 || strcmp(m,"june")==0 && d>=1 && d<=20) { 
		printf("The Zodiac Is : Gemini");
		}
	else if (strcmp(m,"June")==0 || strcmp(m,"june")==0 && d>=21 && d<=31) { 
		printf("The Zodiac Is : Cancer");
		}
	else if (strcmp(m,"July")==0 || strcmp(m,"july")==0 && d>=1 && d<=22) { 
		printf("The Zodiac Is : Cancer");
		}
	else if (strcmp(m,"July")==0 || strcmp(m,"july")==0 && d>=23 && d<=31 ) {
		printf("The Zodiac Is : Leo");
		}
	else if (strcmp(m,"August")==0 || strcmp(m,"august")==0 && d>=1 && d<=22 ) {
		printf("The Zodiac Is : Leo");
		}
	else if (strcmp(m,"August")==0 || strcmp(m,"august")==0 && d>=23 && d<=31 ) {
		printf("The Zodiac Is : Virgo");
		}
	else if (strcmp(m,"September")==0 || strcmp(m,"september")==0 && d>=1 && d<=22 ) {
		printf("The Zodiac Is : Virgo");
		}
	else if (strcmp(m,"September")==0 || strcmp(m,"september")==0 && d>=23 && d<=31 ) {
		printf("The Zodiac Is : Libra");
		}
	else if (strcmp(m,"October")==0 || strcmp(m,"october")==0 && d>=1 && d<=22 ) {
		printf("The Zodiac Is : Libra");
		}
	else if (strcmp(m,"October")==0 || strcmp(m,"october")==0 && d>=22 && d<=31  ) {
		printf("The Zodiac Is : Scorpio");
		}
	else if (strcmp(m,"November")==0 || strcmp(m,"november")==0 && d>=1 && d<=21  ) {
		printf("The Zodiac Is : Scorpio");
		}
	else if (strcmp(m,"November")==0 || strcmp(m,"november")==0 && d>=22 && d<=31  ) {
		printf("The Zodiac Is : Sagittarius");
		}
	else if (strcmp(m,"December")==0 || strcmp(m,"December")==0 && d>=1 && d<=21 ) {
		printf("The Zodiac Is : Sagitarrius");
	    }
    else{
        printf("Invalid Input");
        }
getch();
return 0;
}
