//input two numbers.wap that printsum of two numbers

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("enter two numbers:");
  scanf("%d %d",&a,&b);
  //&a
  c=a+b;
  printf("\n %d+%d=%d",a,b,c);
  getch();
}