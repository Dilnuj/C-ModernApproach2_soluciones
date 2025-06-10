#include <stdio.h>
int main(void){
int i = 10;
while (i >= 2){
	i /= 2;
	printf("%d ", i++);
	}
return 0;
}
