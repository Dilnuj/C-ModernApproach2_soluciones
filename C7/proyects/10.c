#include <stdio.h>
int main(void)
{
	char ch;
	int sum = 0;

	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n'){
		switch (ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			sum += 1;break;
	
		}
	}

	printf("Your sentence has %d vowels\n", sum);
	return 0;		
}
