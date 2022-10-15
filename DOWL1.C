//example of do..while loop
//input an integer no. wap that print sum of individual digit of the no.

void main()
{
	int n,r,s=0;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	do
	{
	     r=n%10;
	     s+=r;
	     n=n/10;
	}
	while(n>0);
	printf("\n s=%d",s);
	getch();
}