#include <stdio.h>
void function();
int main()
{
    printf("rishabh jain\n");
function();
    return 0;
}
void function(){
    int a ,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    c=a+b;
    printf("The sum is %d",c);
    
}