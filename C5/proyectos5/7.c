#include <stdio.h>
int main (){
	int a,b,c,d;
	int max, min;
	printf("Introduce cuatro numeros: ");

	scanf("%d,%d,%d,%d",&a,&b,&c,&d);

	max = a;
	if ( b > max) max = b;
	if ( c > max) max = c;
	if ( d > max) max = d;

	min = a;
	if ( b < min ) min = b;
	if ( c < min ) min = c;
	if ( d < min ) min = d;

	printf("Maximo: %d\n",max);
	printf("Minimo: %d\n",min);
	return 0;
}
