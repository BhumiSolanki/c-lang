/* 5
   4 5
   3 4 5
   2 3 4 5
   1 2 3 4 5 */

void main()
{
	int n,i,j;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	   for(j=i;j<=n;j++)
	   printf("%5d",j);
	printf("\n");
	}
	getch();
}