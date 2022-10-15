//2 4 6 8 ......n nos

void main()
{
	int i,n,b=2;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   printf("%d\t",b);
	   b=b+2;
	}
	getch();
}