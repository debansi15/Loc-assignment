#include <stdio.h>
#include <conio.h>

void count(char arr[])
{
	int vowel = 0, consonant = 0;
	char ch;
	for (int i = 0; arr[i] != '\0'; i++) {
		ch = arr[i];
		if (ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'
			|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U')
			vowel++;
		else if (ch == ' ')
			continue;
		else
			consonant++;
	}
	printf("\nThe number of vowels is : %d", vowel);
	printf("\nThe number of consonant is : %d", consonant);
}

int main()

{	char arr[100];
	printf("Enter string :");
	gets(arr);
	count(arr);

	getch();
	return 0;
}