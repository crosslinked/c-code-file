#include<stdio.h>
int main(){
    int num,r;
    printf("rishabh jain");
    printf("\n Enter the value of the number:");
    scanf("%d",&num);
    r=num%10;
    if(r==5){
        num=num/10;
        printf("The square is %d%d",num*num++,r*r);
    }
    return 0;
}