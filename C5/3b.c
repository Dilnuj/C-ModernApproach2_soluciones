#include <stdio.h>

int main() {
    // Declaración e inicialización de variables
    int i = 7;
    int j = 8;
    int k = 9;

    // Análisis de la expresión lógica con cortocircuito
    printf("%d ", i - 7 && j++ < k);  // Evalúa i-7 primero (0), entonces no evalúa j++<k
    printf("%d %d %d\n", i, j, k);    // Muestra los valores finales

    return 0;
}
