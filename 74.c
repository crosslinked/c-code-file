#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("rishabh jain");
    int *ptr;
    ptr=(int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i]=7*(i+1);
        printf("\n the value of 7X %d=%d\n",i+1,ptr[i]);
    }
    ptr=realloc(ptr,15*sizeof(int));
    printf("after reallocation");
    for(int i=0;i<15;i++){
        ptr[i]=7*(i+1);
        printf("\n the value of 7* %d= %d\n",i+1,ptr[i]);
    }
    return 0;
}