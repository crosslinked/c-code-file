#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("rishabh jain");
    int *ptr;
    int *ptr2;
    ptr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        ptr2=(int *)malloc(60000*sizeof(int));
    printf("\n Enter the value of %d elements:",i);
    scanf("%d",&ptr[i]);
    free(ptr2);
}
for(int i=0;i<6;i++){
    printf("\n The value of %d elements is %d",i,ptr[i]);
}
    return 0;
}