#include <stdio.h>
#include<math.h>


int main()
{float p,r,t,SI,CI;
    printf("rishabh jain\n");
printf("Enter the value of principal"); 
scanf("%f",&p);
printf("Enter the value of rate");
scanf("%f",&r);
printf("Enter the value of time");
scanf("%f",&t);
SI=(p*r*t)/100;
printf("The Simple Interest is %f",SI);
CI= p*(pow((1+r/100),t));
printf("The Compound Interest is %f",CI);
    return 0;
}