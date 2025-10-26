#include <stdio.h>
void main()
{
	double x, F;
	puts("input x");
	scanf_s("%lf", &x); // контрольный пример: x = 5, F = 4
	printf("F = %.2f", x <= 3 && x > 0 ? x * x : 4);
}