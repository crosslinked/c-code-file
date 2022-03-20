#include <stdio.h>

int main()
{int num,a;
    printf("rishabh jain");
    printf("\n Enter the number");
    scanf("%d",&num);//123
    while(num>0){
        a=num%10; //3
        num=num/10;
        printf("%d",a);
    }
    

    return 0;
}