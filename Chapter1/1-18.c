#include <stdio.h>
#define MAXLINE 50
#define MINLINE 5

int getline(char s[], int lim);


int main()
{
	int len;
	int line[MAXLINE];
	int state;

	while ((len = getline(line, MAXLINE)) > 1)
	{
		for (int i = len - 1; i > 0; --i)
		{
			if (line[i] == ' ' || line[i] == '\t')
			{
				line[i] = '\0';
				--len;
			}
		}
		printf("%s", line);
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