#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y = 1;
	double div, avg;
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	printf("\tx\ty\tx/y\t\tavg of y and x/y\n");
	printf("------------------------------------------------------------\n\n");

	div = x / y;
	avg = (div + y) / 2;

	while (fabs(y - avg) >= 1e-4 * y){
		printf("\t%.2lf\t%.2lf\t%lf\t%lf\n",x , y, div, avg);

		y = avg;
		div = x / y;
		avg = (div + y) / 2;
		
	}
	return 0;
	


}
