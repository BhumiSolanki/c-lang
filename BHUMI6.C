//conditional operator(?:)
//input an int. wap that check whether the number is +ve,-ve or zero

void main()
{
  int a;
  clrscr();
  printf("enter a no.");
  scanf("%d",&a);
  a>0? printf("%d is positive",a):
  a<0? printf("%d is negative",a):
  printf("%d is zero",a);
  getch();
}