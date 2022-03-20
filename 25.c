#include <stdio.h>

int main()
{ int num;
    printf("rishabh jain\n");
    printf("Enter the value:");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        printf("\n The number is %d , Its Square is %d",i,i*i);
    }
    return 0;
}