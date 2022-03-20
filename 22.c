#include <stdio.h>

int main()
{int a;
    printf("rishabh jain\n");
    printf("Enter the value");
    scanf("%d",&a);
    if(a%2==0)
    goto even;
    else
    goto odd;
    even:
        printf("The value entered is even");
        return; 
        odd:
        printf("The value entered is odd");
        return 0;
    }