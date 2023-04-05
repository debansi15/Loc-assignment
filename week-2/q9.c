#include<stdio.h>
#include<conio.h>

int main(){
    int row=5;
    for (int i = 1; i <=row; i++)
    {
        for (int j= i; j<=row; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
    return 0;
}