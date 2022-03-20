#include <stdio.h>

int main()
{ int num,i,fact=1;
    printf("rishabh jain");
    printf("\n Enter the value ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The value of factorial %d is %d ", num,fact);

    return 0;
}
