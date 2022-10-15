//access my header file
#include<C:/BHUMI/C-LANG/MYHEADER.C>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter two nos:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	d=sub(a,b);
	printf("\n %d + %d =%d",a,b,c);
	printf("\n %d + %d =%d",a,b,d);
	getch();
}