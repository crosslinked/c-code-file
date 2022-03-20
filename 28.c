#include <stdio.h>
#include<math.h>

int main()
{int num1,num2,i,p;
printf("rishabh jain");
printf("\n Enter the value of 1st number");
scanf("%d",&num1);
printf("Enter the value of 2nd number");
scanf("%d",&num2);
for(i=num1;i<=num2;i++){
    p=sqrt(i);
    if(p*p==i){
        printf("%d\n ",i);
    }   
}
    return 0;
}