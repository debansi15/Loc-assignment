#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    
    if(0<a)
    {
    printf("positive number",a);
    } 
    else if(0>a)
    {
    printf("negative number",a);
    }
    else
    {
    printf("zero",a);
    }
    return 0;

}