#include <stdio.h>

int main(){
int i, j;

printf("Introduce un numero: \n");
scanf("%d", &i);
	
	i <= 9 ? j = 1 : i <= 99 ? j = 2 : i <= 999 ? j = 3 : i <= 9999 ? j = 4 : printf("el numero %d tiene 5 o mas digitos\n", i);
	
printf("El numero %d tiene %d digitos\n", i, j);

return 0;
}

	
