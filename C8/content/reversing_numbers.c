#include <stdio.h>
#define N 10
int main(void)
{
	int a[N];
	int i;
	printf("Enter %d numbers: ", N);
	for ( i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	printf("reversed: ");
	for (int i = N - 1; i >= 0; i--){
		printf(" %d", a[i]);
	}

	printf("\n");
	return 0;	
}
