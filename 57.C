#include<stdio.h>
#include<conio.h>
void main()
{int arr[100];
int i,mx,mn,n;
clrscr();
printf("\n RISHABH JAIN");
printf("\n enetr the numbers to store in array:");
scanf("%d",&n);
printf("\n enetr %d elements in the array:",n);
for(i=0;i<n;i++)
{printf("\n element:");
scanf("%d",&arr[i]);}
mx=arr[0];
mn=arr[0];
for(i=1;i<n;i++)
{if(arr[i]>mx)
{mx=arr[i];}
{if(arr[i]<mn);}  }
printf("\n maximum element is=%d",mx);
printf("\n minimum elemant is=%d",mn);
getch();}