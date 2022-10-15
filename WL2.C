//palindrom
//n=121
//121 is palindrom no.
//n=123
///n 123 is not a palindrome no.

void main()
{
	int n,s=0,r,m;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	    r=n%10;
	    s=s*10+r;
	    n=n/10;
	}
	if(s==m)
	    printf("\n %d is palindrom no.",m);
	else
	    printf("\n is not a palindrome no.",m);
	getch();
}