#include <stdio.h>

int main()
{int radius;
float area,perimeter,pi=3.14;
    printf("rishabh jain");
    printf("\n Enter the value of radius ");
    scanf("%d",&radius);
    area= pi*radius*radius;
    printf("The Area of Circle is %f",area);
    perimeter=2*pi*radius;
    printf("\n The perimeter of Circle is %f",perimeter);

    return 0;
}