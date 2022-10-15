//continue example

void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	    if(i%5==0)
	       continue;
	    printf("\ni=%d",i);
	}
	getch();
}