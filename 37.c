#include<stdio.h>
#include<math.h>
int main()
{
    printf("rishabh jain\n");
    int a=1,num,sum=0;
    printf("enter num:");
    scanf("%d",&num);
    do
    {
        printf("%d,square=%d\n",a,a*a);
        sum+=a;
        a++;
    }
    while(a<=num);
    printf("sum of digit=%d",sum);
    return 0;
}