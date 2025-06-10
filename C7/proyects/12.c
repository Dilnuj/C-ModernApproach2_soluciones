#include <stdio.h>
int main(void)
{
	double res,num;
	char ch;
	printf("Enter an expresion\n");
	scanf("%lf", &res);
	while ((ch = getchar())!= '\n'){
		switch (ch){
		case '+': 
			scanf("%lf", &num);
			res += num;
			break;
		case '-': 
			scanf("%lf", &num);
			res -= num;
			break;
		case '/': 
			scanf("%lf", &num);
			res /= num;
			break;
		case '*': 
			scanf("%lf", &num);
			res *= num;
			break;
		default: break;
	}
	}

	printf("Valor de la expresion: %.1f\n", res);
		
	return 0;

}
