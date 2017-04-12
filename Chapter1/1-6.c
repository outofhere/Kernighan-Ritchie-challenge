#include <stdio.h>

int main()
{
    int c;

    while (c = getchar() != EOF)
    {
        printf ("Result:%d\n", c);
        c = EOF;
        if (c == EOF) break;
    }
    c = c != EOF;
    printf ("Result if eof:%d\n", c);   
    return 0;
}
