#include<stdio.h>
int main()
{
    printf("rishabh jain\n");
    int num,numm,sum=0,a;
    printf("enter the no:");
    scanf("%d",&num);
    numm=num;
    while(num!=0)
    {
        a=num%10;
        num=num/10;
        sum=sum+(a*a*a);
    }
    if(sum==numm)
    printf("num is armstrong");
    else
    printf("num is not armstrong");
    return 0;
}