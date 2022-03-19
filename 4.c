#include <stdio.h>
int main()
{ 
    int a,b,c,d,e,sum,percentage;
    printf("rishabh jain");
    printf("\n Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Enter the value of c");
    scanf("%d",&c);
    printf("Enter the value of d");
    scanf("%d",&d);
    printf("Enter the value of e");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    printf("The sum is %d",sum);
    percentage=sum/5;
    printf("The percentage is %d",percentage);

    return 0;
}