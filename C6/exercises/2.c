#include <stdio.h>
//correcto 9384 938 93 9 0
int main(void){
int i;
i = 9384;
do {
	printf("%d ", i);
	i /= 10;
	} while (i >= 0);
	return 0;
}
