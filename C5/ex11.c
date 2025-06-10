#include <stdio.h>

int main(){
    int i;
    printf("Area code\n");
    scanf("%d", &i);
    switch (i){
        case 229: printf("Albany\n"); break;
        case 404: printf("Atlanta"); break;
        case 470: printf("Atlanta"); break;
        case 478: printf("Macon"); break;
        case 678: printf("Atlanta"); break;
        case 706: printf("Columbus"); break;
        case 762: printf("Columbus"); break;
        case 770: printf("Atlanta"); break;
        case 912: printf("Savannah"); break;
        default : printf("No se reconoce el Area Code"); break;
    }
}
