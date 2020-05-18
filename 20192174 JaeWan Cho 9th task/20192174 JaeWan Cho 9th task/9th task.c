#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	double c;
	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			c = a * a + b * b;
			c = sqrt(c);
			if ((c - (int)c) == 0)
				printf("%d %d %d\n", a, b, (int)c);
			else
				continue;
		}
	}
}