#include <stdio.h> 
int main (){
	int t, m;
	char * M;
	printf("Entra el tiempo hh:mm ");
	scanf("%d:%d", &t, &m);
	//t > 12 ? t -= 12; M = 'P';: t == 0 ? t = 12; M = 'A';: t == 12 ? M = 'P';
	M = (t == 0) ? "AM" :
	    (t > 11) ? "PM" :
	    (t == 24) ? "AM":
	    (t < 12) ? "AM" : "AM";
	t = (t == 0) ? 12 :
	    (t > 12) ? t - 12 : t; 
	printf("Equivalente a tiempo de 12hrs: %d:%02d %s\n", t, m, M);
	return 0;
}
	
	
