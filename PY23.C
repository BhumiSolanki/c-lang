/* 5 4 3 2 1 2 3 4 5
   5 4 3 2   2 3 4 5
   5 4 3       3 4 5
   5 4           4 5
   5               5 */

void main()
{
	int n,i,j,sp=-1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=n;j>=i;j--)
	      printf("%2d",j);
	   for(j=1;j<=sp;j++)
	      printf("  ");
	   sp+=2;
	   if(i==1)
	     j=i+1;
	   else
	     j=i;
	   for(;j<=n;j++)
	     printf("%2d",j);
	   printf("\n");
	}
	getch();
}