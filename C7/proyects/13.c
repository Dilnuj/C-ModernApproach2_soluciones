#include <stdio.h>
int main(void)
{
	double avg;
	int palabras= 1, letras = 0, espacios = 0;

	char ch;


	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n'){
		if (ch == ' '){
			palabras += 1;
			espacios += 1;
		}else{ letras += 1;}
		
	}

      printf("Average word length: %.1f\n",(double)letras / palabras);
      printf("spaces %d\n",espacios);
      printf("letras %d\n",letras);
      printf("palabras %d\n",palabras);

      return 0;

}
