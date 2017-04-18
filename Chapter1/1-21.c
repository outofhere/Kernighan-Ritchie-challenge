#include <stdio.h>
#define MAXSIZE 50
#define OUT 0
#define IN 1

int getline(char s[], int lim);
void entab(char s[], int tab);

int main()
{
	char a[MAXSIZE];
	int len = 0;
	int tab = 4;
	while ((len = getline(a, MAXSIZE)) > 1)
	{
		entab(a, tab);
	}

	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void entab(char s[], int tab)
{
	int index, len;
	int state = OUT;
	len = 0;
	int counter = 0;
	while (s[len] != '\0')
	{
		++len;
	}

	for (int i = 0; i < len - 1; ++i)
	{
		if (s[i] == ' ')
		{
			state = OUT;
			++counter;
			if (counter == tab)
			{
				putchar('\t');
				counter = 0;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			for (int j = 0; j < counter; ++j)
				putchar(' ');
			counter = 0;
			putchar(s[i]);
		}
		else
		{
			putchar(s[i]);
		}
	}
	printf("\n");

}