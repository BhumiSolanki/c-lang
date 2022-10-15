/* 1
   2 1
   3 2 1
   4 3 2 1 */

void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   j=i;
	   for(j=1;j<=i;j++)
	   {
	       printf("%5d",j%2);
	   }
	   printf("\n");
	}
	getch();
}