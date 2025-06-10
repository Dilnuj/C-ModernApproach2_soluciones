#include <stdio.h>
int main(void){
int num, dem, residuo;

printf("Enter two integers: ");
scanf("%d/%d", &num, &dem);

int a = num, b = dem;

while (b != 0){
	residuo = a % b;
	a = b;
	b = residuo;
}

	printf("GCD is %d/%d\n", num / a, dem / a);
return 0;
}
