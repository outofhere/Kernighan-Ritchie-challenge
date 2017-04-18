#include <stdio.h>
#define MAXSIZE 50
#define FOLD 10
#define OUT 0
#define IN 1

int getline(char s[], int lim);

int main()
{
	int len;
	char a[MAXSIZE];
	int state = OUT;
	int spaceholder = 0;
	while ((len = getline(a, MAXSIZE)) > 1)
	{
		if (len > FOLD)
		{
			for (int i = 0; i < len - 1 ; ++i)
			{
				
				if (state == IN && a[i] == ' ' && i < FOLD)
				{
					spaceholder = i;
				}
				if (a[i] == ' ')
				{
					state = OUT;
				}
				else if (state == OUT)
				{
					state = IN;
				}
			}
			if (spaceholder != 0)
				a[spaceholder] = '\n';
			printf("%s", a);
		}
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
