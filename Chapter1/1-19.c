#include <stdio.h>
#define MAXLINE 50
int getline(char s[], int lim);
void reverse(char s[]);

int main()
{
	int len;
	char a[MAXLINE];
	while ((len = getline(a, MAXLINE)) > 1)
	{
		reverse(a);
		printf("%s", a);
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

void reverse(char s[])
{
	int len;
	char rev[MAXLINE];
	len = 0;
	
	while (s[len] != '\0')
	{
		++len;
	}
	printf("%d\n", len);

	for (int i = 0; i < len ; ++i)
	{
		rev[i] = s[len - 1 - i];
	}
	
	for (int i = 0; i < len; ++i)
	{
		s[i] = rev[i];
	}
}
