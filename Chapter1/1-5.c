#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()
{
    float fahr, celsius;
    celsius = UPPER;
    printf ("Celsius\t");   
    printf ("Fahrengeit\n");
    while (celsius >= LOWER)
    {
        //celsius = (5.0/9.0) * (fahr-32.0);
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf ("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius - STEP;
    }
}
