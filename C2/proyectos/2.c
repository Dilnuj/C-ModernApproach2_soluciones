#include <stdio.h>

int main(void)
{
	//esfera
	float r, v, pi = 3.1416;
	
	printf("calcular volumen de esfera: \n");
	printf("radio(metros): ");
	scanf("%f",&r);
	v = (4.0f/3.0f) * pi *r*r*r;
	printf("volumen = %fm^3\n", v);
	return 0; 
}
