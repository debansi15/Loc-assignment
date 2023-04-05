#include <stdio.h>
#include <conio.h>
char str[100];
int alpha = 0, digit = 0, special = 0;
void count(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("The number of alphabets are %d",alpha);
    printf("\nThe number of digits are %d",digit);
    printf("\nThe number of special characters are %d",special);
}

int main()
{
    printf("Enter string :");
	gets(str);
	count(str);

	getch();
	return 0;
}