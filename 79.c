#include<stdio.h>
#include<string.h>
int main(){
    char *ptr="rishabh";
    char s[22];
    int a;
    strcpy(s,ptr);
    printf("now the value is %s",s);
    return 0;
}