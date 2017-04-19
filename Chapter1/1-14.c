#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 93
int main()
{
	int c, state;
	float a[MAXLENGTH];
	float freq[MAXLENGTH];
	int len = 0;
	for (int i = 0; i < MAXLENGTH; ++i)	
	{
		a[i] = 0;
		freq[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		++len;
		if (c == '\n')
		{
			break;
		}

		if ((c >= 0x20) && (c <= 0x7a))
		{
			++a[c - 0x20];
		}
	}

	for (int i = 0; i < MAXLENGTH; ++i)
	{
		freq[i] = a[i] / (len - 1) * 100;
		printf("%f\n", freq[i]);

	}

	for (int i = 0; i < MAXLENGTH; ++i)
	{
		putchar('|'); //Placeholder for empty rows
		while (freq[i] > 0.0)
		{
			putchar('*');
			--freq[i];
		}
		putchar('\n');
	}

	getchar();
	return 0;
}
