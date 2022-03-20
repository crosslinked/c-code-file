#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("rishabh jain");
    int *ptr;
    ptr=(int *)malloc(6 *sizeof(int));
    for(int i=0;i<6;i++){
        printf("\n enter the value of %d elements:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("\n the value of %d elements is %d",i,ptr[i]);
    }
    return 0;
}