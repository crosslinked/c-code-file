#include <stdio.h>

int main()
{ int num1=1,num2;
    printf("rishabh jain");
printf("\n Enter the first number");
scanf("%d",&num1);
printf("Enter the last number");
scanf("%d",&num2);
    do{
        printf("%d\n ",num1);
        num1++;
    }
    while(num1<=num2);
    

    return 0;
}