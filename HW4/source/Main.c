#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h;
	float m, s;
	printf("Enter # of hours worked(-1 to end):");
	scanf("%d", &h);
	printf("Enter hourly rate of the woker($00.00):");
	scanf("%f", &m);
	if (h <= 40)
	{
		s = h * m;
		printf("Salary is $%.2f", s);
	}
	else if (h > 40)
	{
		s = 40 * m + (h - 40) * 1.5 * m;
		printf("Salary is $%.2f", s);
	}
	system("pause");
	return 0;
}