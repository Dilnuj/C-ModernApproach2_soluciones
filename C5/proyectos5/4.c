#include <stdio.h>

int main (){
	int k;
	const char *D;

	printf("Escribe velocidad del viento en nudos: ");
	scanf("%d", &k);

	D = (k < 1) ? "Calm": (k <= 3) ? "Light Air": (k <= 27) ? "Breeze" :
	(k <= 47) ? "Gale" : (k <= 63) ? "Storm" : "Hurricane";
	
	printf("%s\n", D);

	return 0;
}
