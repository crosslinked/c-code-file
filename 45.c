#include <stdio.h>

int main()
{ int age;
    printf("rishabh jain");
    printf("\n Enter your age ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are allowed to drive");
    }
    else{
        printf("You are not allowed to drive");
    }

    return 0;
}