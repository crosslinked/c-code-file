#include <stdio.h>
void wrong_swap(int a,int b);


int main()
{ int a=3,b=4;
    printf("rishabh jain");
    printf("\n Before calling the function th evalueof a is %d and %d",a,b);
wrong_swap(a,b);
printf("\n After calling the function , the values are %d and %d",a,b);

    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}