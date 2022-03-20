#include<stdio.h>
#include<string.h>
int main(){
    char ptr[22]="rishabh";
    char a[22]="jain";
    strcat(ptr,a);
    printf("after cancatination is %s",ptr);
    return 0;
}