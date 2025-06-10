#include <stdio.h>
int main(void)
{
	char ch;
	char fn[20], ln[20];
	printf("Enter a first and last name: ");
	scanf("%s %s", fn ,ln);

	printf("%s, %c.\n", ln, fn[0]);
	return 0;
	
}
