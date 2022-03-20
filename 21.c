#include <stdio.h>

int main()
{int a,b,c,ch;
    printf("rishabh jain");
    printf("\n Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("ARITHMETIC OPERATIONS");
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    c=a+b;
    printf("Addition is %d",c);
    break;
    case 2:
    c=a-b;
    printf("Subtraction is %d",c);
    break;
    case 3:
    c=a*b;
    printf("Multiplication is %d",c);
    break;
    case 4:c=a/b;
    printf("Division is %d",c);}

    return 0;
}