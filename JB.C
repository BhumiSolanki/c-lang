//example of break

void main()
{
	int n,i;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
	    if(i%5==0)
	       break;
	    printf("\n i=%d",i);
	}
	getch();
}