#include <stdio.h>

int main (void)
{
	float x;
	printf("polinomio 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("valor de x: ");
	scanf("%f", &x);
	printf("%.2f \n",3 *x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7 * x - 6);
	return 0;
}
