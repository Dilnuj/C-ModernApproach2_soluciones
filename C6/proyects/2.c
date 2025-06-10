#include <stdio.h>
int main(void){
int m, n, residuo;

printf("Enter two integers: ");
scanf("%d %d", &m, &n);
	printf("ok\n");

while (n != 0){	
	residuo = m % n;
	m = n;
	n = residuo;
}
	printf("GCD is %d\n", residuo);
return 0;
}
