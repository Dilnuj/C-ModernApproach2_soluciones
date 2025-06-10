#include <stdio.h>

int main(void){

for (int i = 0; i < 1; i++){
		printf("loop normal\n");
		if (i <= 1){
			printf("continue sale del loop\n");
			continue;
			printf("salta este print");
		}		
int j;
j = 1;
while (j <= 2){ 

	printf("loop sec\n");
	++j;
	goto gotoex;
}
		}
gotoex: 
	printf("goto breaks the loop\n");


return 0;
}
