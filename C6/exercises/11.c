#include <stdio.h>
int main(void){
//5
int sum;
sum = 0;
for (int i = 0; i < 10; i++) {
	if (i % 2)
		continue;
	sum += 1;
}
printf("%d\n", sum);
		
return 0;
}
