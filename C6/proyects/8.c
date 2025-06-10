#include <stdio.h>
int main(void){
int i, day, start;
	printf("dia: ");
	scanf ("%d", &day);
	printf("dia de inicio (1 = domingo, 7 = sabado): \n");
	scanf ("%d", &start);

	for (i = 1; i < start; i++){
		printf("  ");
	}

	for (i = 1;day >= i; i++){
		printf("%3d ", i);
		if ((day + i - 1) % 7 == 0)
  	    		printf("\n");
	}

return 0;
}
