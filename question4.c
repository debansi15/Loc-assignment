#include<stdio.h>
int main()

{
    
    int a,b,n;
    printf("enter the choice:");
    scanf("%d",&n);
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    switch(n)
    {
        case 1:printf("addition=%d",a+b);
        break;

        case 2:printf("substraction=%d",a-b);
        break;

        case 3:printf("multiplication=%d",a*b);
        break;

        case 4:printf("division=%d",a/b);
        break;

        case 5:printf("modulus=%d",a%b);
        break;

        default:printf("invalid");
        break;
              
    }
    return 0;
}