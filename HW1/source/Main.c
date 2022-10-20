#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int atnum;
	float a, b, c, d, s;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &atnum);
		if (atnum == -1)
			break;
		printf("Enter beginning balance:");
		scanf("%f", &a);
		printf("Enter total charges:");
		scanf("%f", &b);
		printf("Enter total credits:");
		scanf("%f", &c);
		printf("Enter credit limit:");
		scanf("%f", &d);
		s = a + b - c;
		printf("Account:%d\n", atnum);
		printf("Credit limit:%.2f\n", d);
		printf("Balance:%.2f\n", s);
		if (s > d)
			printf("Credit limit Exceeded.\n");
	}
	system("pause");
	return 0;
}