//input an int no wap that check wheather the no is odd,even or zero.

void main()
{
  int a;
  clrscr();
  printf("enter a no.");
  scanf("%d",&a);
  a%2==0? printf("%d is even",a):
  a==0? printf("%d is odd",a):
  printf("%d is zero",a);
  getch();
}