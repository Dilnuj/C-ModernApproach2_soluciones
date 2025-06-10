#include <stdio.h>

int main(void){
	int i, n;

	printf("enter number of entries in the table: ");
	scanf("%d", &n);
	i = 1;

	while ( i <= n ){
		printf("\t%d\t%d\n", i, i * i );
		i ++;
	}
		
	return 0;
}
