#include <stdio.h>
int main(){
int cal;
printf("Calificacion en numero: ");
scanf("%d", &cal);

cal = cal / 10;

switch (cal){
	case 10 : printf("A\n");; break;
	case 9 : printf("B\n"); break;
	case 8 : printf("C\n"); break;
	case 7 : printf("D\n"); break;
	case 6 : printf("E\n"); break;
	case 5 : printf("F\n"); break;
	default : printf("Error\n");break;
}

return 0;

}
