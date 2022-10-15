//string operations

#include<string.h>

void main()
{
	char s1[20],s2[20],s3[20];
	int l1,l2,l3;
	clrscr();
	printf("Enter two strings:");
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	printf("\n length of %s is %d",l1);
	printf("\n length of %s is %d",l2);
	strcpy(s3,s2);
	printf("\n s1=%s",s1);
	printf("\n s2=%s",s2);
	printf("\n s3=%s",s3);
	strcat(s1,s2);
	printf("\n now s1=%s",s1);
	getch();
}
