#include <stdio.h>

#define MAXLINE 1000

/*
*Highly debatable task. More elaborated solutions on the link below.
*http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_1:Exercise_16
*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 1) // Changed from zero
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
	{	
		printf("%s\n", longest);
		printf("Longest string: %d", max);
	}
	getchar();
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

void copy(char to[], char from[])
{
	int i = 0;
	
	while ((to[i] = from[i]) != '\0')
		++i;
}