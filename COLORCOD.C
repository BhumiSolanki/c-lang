//switch statement

void main()
{
	char c;
	clrscr();
	printf("\n color code in R-Red \n G-Green \n B-Blue");
	printf("\n enter color code");
	scanf("%c",&c);
	switch(c)
	{
	    case'r':
	    case'R':
	       printf("\n Red");
	       break;
	    case'g':
	    case'G':
	       printf("\n Green");
	       break;
	    case'b':
	    case'B':
	       printf("\n Blue");
	       break;
	    default:
	       printf("\n invalid color code");
	       break;
	    }
	    getch();
}