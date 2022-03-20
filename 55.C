#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int age,count=0,x=1;
float weight;
clrscr();
printf("\n RISHABH JAIN");
printf("\n enter the age:");
printf("and weight of the 5 students:");
do{
scanf("%d",&age);
scanf("%d",&weight);
if(age<25&& weight<50)
{count++;}
x++;}
while(x<=5);
printf("number of students of <25 age");
printf("and <50 weight=%d",count);
getch();
}