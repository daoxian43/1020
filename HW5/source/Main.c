#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l, b,i=1,j=1;
	printf("Please input the length:");
	scanf("%d", &l);
	printf("Please input the breadth:");
	scanf("%d", &b);
	for (i = 1; i <= l; i++)
	{
		printf("\n");
		for (j = 1; j <= b; j++)
		{
			if (i == 1 || i == l || j == 1 || j == b)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
	}
	system("pause");
	return 0;
}