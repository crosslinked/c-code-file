#include <stdio.h>
void swap(int*a,int*b);
int main()
{int  a=4,b=3;

    printf("rishabh jain");
    printf("\n The values before call by reference is %d and %d",a,b);
    swap(&a,&b);
    printf("\n The values after call by reference is %d and %d",a,b);
    

    return 0;
}
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}