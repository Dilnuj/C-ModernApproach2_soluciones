#include <stdio.h>
int main(void){
float num, max = 0;
	while (1){
		printf("Enter a number: ");
		scanf("%f", &num);
	
	if (num <= 0){
		break;					
	}
	if (num > max){
		max = num;
	}
}
     printf("The largest number was: %.2f\n", max);
	return 0;
}
