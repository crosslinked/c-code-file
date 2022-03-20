#include <stdio.h>

int main()
{int age, weight;
printf("rishabh jain\n");
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your weight");
scanf("%d",&weight);
do{
if(age>=25||weight>=50){
    printf("The condition is not satisfied");
}
else{
    printf("The condition is satisfied");
}
    
}while(age<25 &&weight<50);

    return 0;
}