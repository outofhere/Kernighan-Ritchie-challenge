#include <stdio.h>


int main()
{
    int c, counter, nl;
    counter = 0;
    
    while ((c = getchar()) != EOF)
    {
        if ( c == ' ' || c == '\t')
        {
            counter++;
                
            if (counter < 2)
            {
                putchar(' ');
            };
        }
        else 
        {
            putchar(c);
            counter = 0;
        }
        
        

    }
}

