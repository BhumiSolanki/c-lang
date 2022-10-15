//goto example

void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	l1:
	     if(n%i==0)
	     {
		 printf("\n %d is not prime",n);
		 goto l2;
	     }
	     i++;
	     if(i<n)
		 goto l1;
	     printf("\n %d is prime",n);
	l2:
	getch();
}