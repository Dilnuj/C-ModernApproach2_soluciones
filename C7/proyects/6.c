#include <stdio.h>
#include <stdint.h>
//tekrne
int main(void)
{

	printf("prints the values of different sizeof \n");

	printf(" short %zu, int %zu, long %zu \n ", sizeof(short), sizeof(int), sizeof(long));

	printf("float %zu, double %zu, long double %zu \n ", sizeof(float), sizeof(double), sizeof(long double));

	return 0;
	
}
