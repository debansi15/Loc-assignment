#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("enter radius of the circle:");
    scanf("%f",&radius);

    //to calculate diameter,circumference and area

diameter=2*radius;
circumference=2*3.14*radius;
area=3.14*(radius*radius);

printf("diameter=%f,\n",diameter);
printf("circumference=%f,\n",circumference);
printf("area=%f,\n",area);

return 0;

}