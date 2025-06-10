//numeros pares entre 1 un un numero ingresado
#include <stdio.h>
int main(void){
int n, i, sum = 0;
printf("suma de pares\n");
printf("ingrese el numero :");
scanf("%d", &n);

for (i = 1; i <= n; i++)
     if (i % 2 == 0)
     	sum += i;

printf("Suma de pares: %d\n", sum);

return 0;
}
