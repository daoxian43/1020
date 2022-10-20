#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k < i * 2; k++)
			printf("*");
		printf("\n");
	}
	for (int l = 0; l <= 3; l++)
	{
		for (int m = 4; m > 3 - l; m--)
			printf(" ");
		for (int n = 7 - l * 2; n >= 1; n--)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}