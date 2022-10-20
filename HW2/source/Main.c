#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float s;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &s);
		if (s == -1)
			break;
		float salary = ((s * 0.09) + 200.00);
		printf("Salary is: $%.2f\n", salary);

	}
	system("pause");
	return 0;
}