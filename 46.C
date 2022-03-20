#include<stdio.h>
#include<conio.h>
void main()
{
int time;
clrscr();
printf("\n rishabh jain");
printf("\n enter time=");
scanf("\n %d",&time);
if(time<12)
{
printf("\n good morning");
}
else if(12<=time<17)
{
printf("\n good afternoon");
}
getch();
}