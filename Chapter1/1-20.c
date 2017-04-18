#include <stdio.h>
#define MAXLENGTH 50

int getline(char s[], int lim);
void entab(char s[], int tab);

int main()
{
	char a[MAXLENGTH];
	int len, tab;

	tab = 4;

	while (len = getline(a, MAXLENGTH) > 1)
	{
		entab(a, tab);
		//printf("%s", a);
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
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}

void entab(char s[], int tab)
{
	int len = 0;
	int index = 0;
	int space = 0;
	char rev[MAXLENGTH];
	while (s[len] != '\0')
	{
		if (s[len] != '\t')
		{
			rev[index] = s[len];
			++len;
			++index;
		}
		else 
		{
			space = tab - index % tab;
			printf("%d\n", space);
			for (int i = 0; i < space; ++i)
			{
				rev[index] = ' ';
				++index;
			}
			++len;
		}

	}
	rev[index] = '\0';
	printf("%s\n", rev);
}