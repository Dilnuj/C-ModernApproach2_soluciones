#include <stdio.h>

int main(void){
int n, mul;
scanf("%d", &n);

for (int i = 0; i <= n; i++){
	mul = i;
	if ( n / i == 0){
		printf("%d\n", mul * mul);

	} else
		continue;
}
return 0;
}
