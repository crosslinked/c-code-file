#include <stdio.h>

int main()
{ int num,count=0;
    printf("rishabh jain");
    printf("\n Enter the number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%1==0)
        count++;
    }
    if(count==2)
    printf("The number is prime");
    else
    printf("The number is not prime");

    return 0;
}