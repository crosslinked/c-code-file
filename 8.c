#include <stdio.h>

int main()
{
    int a, b, c;
  printf ("rishabh jain");
  printf ("\n Enter the value of a :");
  scanf ("%d", &a);
  printf ("Enter the value of b :");
  scanf ("%d", &b);
  c = a + b;
  printf ("Addition is %d\n ", c);
  c = a - b;
  printf ("Subtraction  is %d\n ", c);
  c = a * b;
  printf ("Multiplication is %d\n ", c);
  c = a / b;
  printf ("Division is %d\n ", c);
  c=a%b;
  printf("Modulus is %d\n ",c);

    return 0;
}