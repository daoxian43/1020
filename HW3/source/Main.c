#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float p, r, t;
	int day;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &p);
		if (p == -1)
			break;
		printf("Enter interest rate:");
		scanf("%f", &r);
		printf("Enter term of loan in days:");
		scanf("%d", &day);
		t = p * r * day / 365;
		printf("The interest charge is $:%.2f\n", t);
	}
	system("pause");
	return 0;
}