#include <stdio.h>

int convertion(int);

int convertion(float fahr)
{
	float celsius;
	celsius = 5.0 * (fahr - 32) / 9.0;
	return celsius;
}

int main()
{
	int test = convertion(20);
	printf("Celsius convertio: %d", test);
	getchar();
	return 0;
}