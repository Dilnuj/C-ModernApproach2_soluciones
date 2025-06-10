#include <stdio.h>

int main() {
    int i;  // Declaración de la variable i

    // Bucle for que imprime y modifica i
    for (i = 10; i >= 1; i /= 2) {
        printf("%d ", i++);
    }

    return 0;
}
