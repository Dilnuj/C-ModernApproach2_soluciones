#include <stdio.h> 

int main()
{
	float pres_inicial, tasa_ano, pago_mes;
	printf("Loan\n\n");
	printf("cantidad de prestamo : ");
	scanf("%f", &pres_inicial);
	printf("Introduce tasa de interes anual: ");
	scanf("%f", &tasa_ano);
	printf("Introduce pago mensual: ");
	scanf("%f", &pago_mes);

	float tasa_mes, primer_pago, segundo_pago, tercer_pago;	

	tasa_mes = (tasa_ano / 100) / 12;

	primer_pago = (pres_inicial * (1 + tasa_mes))- pago_mes;
	segundo_pago = (primer_pago * (1 + tasa_mes))- pago_mes;
	tercer_pago = (segundo_pago * (1 + tasa_mes))- pago_mes;
	printf("balance despues del primer pago: %.2f \n", primer_pago);
	printf("balance despues del segundo pago: %.2f \n", segundo_pago);
	printf("balance despues del tercer pago: %.2f \n", tercer_pago);
	return 0;
}
	
