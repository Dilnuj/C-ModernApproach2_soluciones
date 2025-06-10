/* Adds two fractions */
#include <stdio.h>
int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char op;
  printf("Enter first fraction: ");
  scanf("%d / %d", &num1, &denom1);
  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);
  printf("Choose operation % * - +: ");
  scanf(" %c", &op);
	switch (op){
		case '+': 
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
			break;
		case '-':
		result_num = num1 * denom2 - denom1 * num2;
		result_denom = denom1 * denom2;	
			break;
		case '%':
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
			break;
		case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
			break;
		default : printf("error operador no valido\n");
			break;
	}
	
  printf("The operation is %d/%d\n", result_num, result_denom);
  return 0;
}
