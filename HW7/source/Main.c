#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(A)             (B)             (C)             (D)\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int a = 1; a <= i; a++)
			printf("*");
		for (int j = 1; j <= (16 - i); j++)
			printf(" ");
		for (int b = 1; b <= (11 - i); b++)
		{
			printf("*");
		}
		for (int c = 0; c <= (4 + i); c++)
			printf(" ");
		if (i > 1)
		{
			for (int d = 8; d > 9 - i; d--)
				printf(" ");
		}
		for (int e = 1; e <= (11 - i); e++)
			printf("*");
		for (int f = 1; f <= (16 - i); f++)
			printf(" ");
		for (int g = 10; g > 10 - i; g--)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}