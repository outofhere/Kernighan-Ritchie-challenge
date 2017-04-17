#include <stdio.h>

#define MAXLINE 30
#define MINLINE 5

int getline(char s[], int lim);

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

int main()
{
	int len;
	int line[MAXLINE];
	while ((len = getline(line, MAXLINE)) > MINLINE)
	{
		printf("%s", line);
	}
	getchar();
	return 0;
}

