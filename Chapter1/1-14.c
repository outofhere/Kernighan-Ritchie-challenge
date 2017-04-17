#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 26
int main()
{
	int c, state;
	int a[MAXLENGTH];
	for (int i = 0; i < MAXLENGTH; ++i)
	{
		a[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			break;
		}

		if ((c >= 0x61) && (c <= 0x7a)) //Other representation is >= 'a' , <= 'z'
		{
			++a[c - 0x61]; // Same is here, 'a'
		}
	}

	for (int i = 0; i < MAXLENGTH; ++i)
	{
		putchar('|'); //Placeholder for empty rows
		while (a[i])
		{
			putchar('*');
			--a[i];
		}
		putchar('\n');
	}

	getchar();
	return 0;
}