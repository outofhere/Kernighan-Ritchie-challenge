#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 10
int main()
{
	int c, state, wl;
	int a[MAXLENGTH];

	wl = 0;
	state = OUT;

	for (int i = 0; i < MAXLENGTH; ++i)
	{
		a[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		//Changing state variable depending on position - inside the word or not 
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
		}

		//If state - inside the word - add counter to word length variable
		if (state == IN)
		{
			++wl;
		}
		else
		{
			++a[wl];
			wl = 0;
		}

		//Breaks if return button hit
		if (c == '\n')
		{
			break;
		}
	}

	//Prints histogram horizontaly
	/*
	for (int i = 1; i < MAXLENGTH; ++i)
	{
		putchar('|');
		while (a[i] != 0)
		{
			putchar('*');
			--a[i];
		}
		putchar('\n');
	}
	*/
	for (int i = 1; i < MAXLENGTH; ++i)
	{
		a[i] = MAXLENGTH - a[i];
	}

	int counter = 0;
	while (MAXLENGTH - counter)
	{
		for (int i = 1; i < MAXLENGTH; ++i)
		{
			if (a[i] > 0)
			{
				putchar(' ');
			}
			else
			{
				putchar('*');
			}
			--a[i];
		}
		putchar('\n');
		++counter;
	}

	for (int i = 1; i < MAXLENGTH; ++i)
	{
		putchar('-');
	}
	getchar();
	return 0;
}