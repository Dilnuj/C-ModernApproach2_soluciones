#include <stdio.h>
int main(void)
{
	int fact = 1, num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	for(int i = num; i > 1 ; i--){
		fact *=  i;
	}
	
	printf("factorial of %d: %d\n", num, fact);
return 0;
}
