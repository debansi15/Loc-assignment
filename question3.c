#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("Enter the value:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    } while (n>0);
    printf("The sum of digits of the given number is %d\n",sum);

    return 0;
}