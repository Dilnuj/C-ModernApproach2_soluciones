#include <stdio.h>

int main(void)
{
	int altura,largo,ancho,volumen,peso;

	printf("Introduce la altura de la caja: ");
        scanf("%d", &altura);
	printf("Introduce el largo de la caja: ");
        scanf("%d", &largo);
	printf("Introduce el ancho de la caja: ");
        scanf("%d", &ancho);
	
	volumen = altura * largo * ancho;

	printf("Volumen en pies cubicos : %d\n", volumen);
	printf("Peso dimensional en libras: %d\n", (volumen + 165) / 166);
	return 0;
}




	

