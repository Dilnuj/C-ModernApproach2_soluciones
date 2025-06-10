#include <stdio.h>

int main (void) 
{
	int b20, b10 , b5, b1, dolar;
	printf("Dinero: ");
	scanf("%d", &dolar);
	b20 = dolar / 20;
	dolar = dolar - (b20 *20) ;
	printf("billete $20 : %d\n",b20);
	b10 = dolar / 10;
	dolar = dolar - (b10 *10) ;
	printf("billete $10 : %d\n",b10);
	b5 = dolar / 5;
	dolar = dolar - (b5 *5) ;
	printf("billete $5 : %d\n",b5);
	b1 = dolar / 1;
	dolar = dolar - (b1 *1) ;
	printf("billete $1 : %d\n",b1);
	return 0;
}
