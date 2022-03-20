#include <stdio.h>
void function(int a,int b);
int main()
{ int a,b;
    printf("rishabh jain");
  function(a,b);
 
}
void function(int a,int b){
int c;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    c=a+b;
    printf("The sum is %d",c);