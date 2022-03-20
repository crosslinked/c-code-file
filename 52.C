#include<stdio.h>
#include<conio.h>
void main()
{
int rows;
char x='A';
clrscr();
printf("\n RISHABH JAIN");
printf("\n enter the number of rows:");
scanf("%d",&rows);
for(int i=1;i<=rows;i++)
{for (int j=1;j<=i;j++)
{
x++;
printf("%c",x);}
printf("\n");
}
getch();
}