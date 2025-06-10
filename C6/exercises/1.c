#include <stdio.h>
//R = Multiplos de 2 hasta  128 
//2,4,16,32,64,128 correcto
int main(void){
int i = 1;
while ( i <= 128 ){
	printf("%d ", i);
	i *= 2;
}
	return 0;
}
