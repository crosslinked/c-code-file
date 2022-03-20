#include <stdio.h>
 int main() 
 {
     printf("rishabh jain\n");
     int i,size,even=0,odd=0;
     printf("enter array length:");
     scanf("%d",&size);
     int arr[size];
     printf("enter the element:");
     for(i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
     for(i=0;i<size;i++)
     {
         if((arr[i])%2==0)
         {
           even=even+arr[i];  
         }
         else
         odd=odd+arr[i];
     }
     printf("sum of even=%d \n",even);
     printf("sum of odd=%d",odd);
     return 0;
 }