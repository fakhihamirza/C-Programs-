#include<stdio.h>
#include<conio.h>
/*Errors
1)If User Enters Some Strings Like This 1256yts so it will print1256 only and ignore the characters but why?  but if user enters something like this 
ytn1764  so it will ignore the whole string but why?*/
int main()
{
    char c;
    int count=0;
    printf("Please Enter A Sentence:");
    while(scanf("%c",&c) != 1) 
    {
    if(c==' ')
    count++;
    printf("%c",c);
    while(getchar() != '\n'); 
    }
    printf("\nThe Total Identifiers Are : %d",count);
    return 0;
}
