#include<ctype.h>

void main()
{
	char c;
	clrscr();
	printf("enter a character:");
	scanf("%c",&c);
	if(isupper(c))
	  printf("% c is upper case letter",c);
	else if(islowercase(c))
	  printf("% c is lower case letter",c);
	else if(digit (c))
	  printf("% c is digit",c);
	else if(isspace(c))
	  printf("% c is white space",c);
	else
	  printf("% c is symbol",c);
	getch();
}
