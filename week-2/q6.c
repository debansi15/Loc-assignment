#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[100], n; // number of elements;
    int count = 1;   // frequency;
    int max_count = 1;
    int max_fq = arr[0];
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i-1])
        {
            count++;
        }
        else count=1;
        if (count > max_count)
        {
            max_fq = arr[i];
            max_count = count;
        }
    }

    printf("Occurrence of %d is max which is %d\n", max_fq, max_count);
    getch();
    return 0;
}