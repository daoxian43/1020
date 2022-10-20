#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float r;
	for (int i = 0; i < 5; i++)
	{
		float s = 5000;
		r = (1 + 0.1 + (i * 0.005));
		for (int j = 1; j <= 15; j++)
		{
			s = s * r;
		}
		printf("%f\n", s);
	}

	system("pause");
	return 0;
}