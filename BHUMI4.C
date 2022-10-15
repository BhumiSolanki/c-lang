//increment & decrement operators

void main()
{
  int a,b;
  clrscr();
  a=5;
  b=a++;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=++a;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=a++ + ++a;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=a++ + a++ + ++a;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=++a + a++ + a++ + ++a;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=++a + a++ + a++;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=a++ + ++a + a++ + ++a;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  b=a++ + a++ + a++ + a++;
  printf("\n a=%d\t b=%d",a,b);
  a=5;
  printf("\n a1=%d\t a2=%d\t a3=%d",a++,a++ + ++a,++a);
  getch();
}