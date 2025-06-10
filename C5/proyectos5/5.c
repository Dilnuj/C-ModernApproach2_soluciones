#include <stdio.h>

int main () {
	int i;
	float f, t;

	printf("Income: ");
	scanf("%d", &i);

	t = ( i < 750 ) ? 0.01 :
	    ( i < 2250) ? 0.02 :
	    ( i < 3750) ? 0.03 :
	    ( i < 5250) ? 0.04 :
	    ( i < 7000) ? 0.05 : 0.06;

	f = ( 0.01 ) ? f = 1 :
	    ( 0.02 ) ? f = 7.50 :
	    ( 0.03 ) ? f = 37.50 :
	    ( 0.04 ) ? f = 82.50 :
	    ( 0.05 ) ? f = 142.50 : 230;

	printf("Deuda : %.2f\n", (i + t) + f);

	return 0;
}
