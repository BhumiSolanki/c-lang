//speacial operator

void main()
{
	long double a;
	int d,b,c;
	clrscr();
	printf("\n var. a occupy%d bytes",sizeof(a));
	d=b=c=20;
	printf("\n b=%d\t c=%d\t d=%d",a,b,c,d);
	b=(c=5,d=10,c+d);
	printf("\n b=%d\t c=%d\t d=%d",b,c,d);
	getch();
}