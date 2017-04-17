#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, nl, nw, nc, state;
	nl = nc = nw = 0;
	state = OUT;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			putchar('\n');
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
			putchar(c);
		}
		else 
		{
			putchar(c);
		}
		if (c == '\n')
		{
			break;
		}		
	}
	//printf("%d %d \n", nw, nc);
	getchar();
	return 0;
}