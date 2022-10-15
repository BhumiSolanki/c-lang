//example of structure

struct Demo
{
	int a;
	float b;
	char c;
};
void main()
{
	struct Demo d;
	clrscr();
	printf("enter an int, a folat and a char. type calue:");
	scanf("%d %f %c",&d.a,&d.b,&d.c);
	printf("\n a=%d",d.a);
	printf("\n b=%.2f",d.b);
	printf("\n c=%c",d.c);
	getch();
}