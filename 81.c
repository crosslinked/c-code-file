#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],c;
    printf("rishabh jain");
    puts("\n enter the string");
    gets(a);
    c=*a;
    strrev(a);
    if(c==*a);
    {
        puts("given string is palindrone");
    }
    else{
        puts("given string is not palindrone");
    }
    getch();
}
