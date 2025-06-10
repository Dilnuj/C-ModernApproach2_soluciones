#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int hrs, min;
	char mer;
	printf("introduce tiempom 12 hrs:\n");
	printf("hh:mm M/P: ");

	scanf(" %d:%d %c", &hrs, &min, &mer);
	if (mer == 'P'){
		hrs += 12;
	}
		

	printf("El  equivalente a 24hrs es: %d:%d \n", hrs, min);
	return 0;
}

