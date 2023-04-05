#include<stdio.h>
#include<conio.h>
void swap(int*x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]<arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        } 
    }
    
    printf("Elements of the sorted array are: ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}